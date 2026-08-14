#define _GNU_SOURCE // Mandatory: Must be at the absolute top of the file

#include <limits.h>
#include <pthread.h>
#include <sched.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <sys/mman.h>
#include <sys/syscall.h>
#include <time.h>
#include <unistd.h>

#define NSEC_PER_SEC 1000000000L
#define PERIOD_NS    1000000L   // 1 ms cycle
#define RUNTIME_NS   200000L    // budget we promise SCHED_DEADLINE we need per cycle
#define ITERATIONS   2000       // ~2 seconds per run
#define HOG_THREADS  4

// SCHED_DEADLINE has no glibc wrapper: the struct and the syscall are declared by hand.
#ifndef SCHED_DEADLINE
#define SCHED_DEADLINE 6
#endif

struct sched_attr {
    uint32_t size;
    uint32_t sched_policy;
    uint64_t sched_flags;
    int32_t  sched_nice;      // SCHED_OTHER
    uint32_t sched_priority;  // SCHED_FIFO / SCHED_RR
    uint64_t sched_runtime;   // SCHED_DEADLINE
    uint64_t sched_deadline;
    uint64_t sched_period;
};

static int set_deadline_policy(uint64_t runtime_ns, uint64_t deadline_ns, uint64_t period_ns) {
    struct sched_attr attr;
    memset(&attr, 0, sizeof(attr));
    attr.size           = sizeof(attr);
    attr.sched_policy   = SCHED_DEADLINE;
    attr.sched_runtime  = runtime_ns;
    attr.sched_deadline = deadline_ns;
    attr.sched_period   = period_ns;

    // pid 0 == the calling thread
    return syscall(__NR_sched_setattr, 0, &attr, 0u);
}

char*my_format = "this is format : %d %d %d";
void set_thread_affinity() {
    cpu_set_t cpuset;
    CPU_ZERO(&cpuset); // Clear the CPU set

    // Add the specific cores you want to use (e.g., Core 2 and Core 3)
    CPU_SET(2, &cpuset);
    CPU_SET(3, &cpuset);

    // Apply the affinity mask to the current calling thread
    int result = pthread_setaffinity_np(pthread_self(), sizeof(cpu_set_t), &cpuset);

    if (result != 0) {
        printf("Failed to set CPU affinity. Error code: %d\n",result);
    }
}

typedef enum { POL_FIFO, POL_OTHER, POL_DEADLINE } policy_t;

// Wake-up lateness collected over one run of the loop.
typedef struct {
    const char* label;
    policy_t policy;
    int  policy_ok;  // did the policy change actually take effect?
    long min_ns;
    long max_ns;
    double avg_ns;
    long over_50us;
    long over_500us;
    long missed;     // cycles that woke a full period or more late
} run_stats;

static void ts_add_ns(struct timespec* t, long ns) {
    t->tv_nsec += ns;
    while (t->tv_nsec >= NSEC_PER_SEC) {
        t->tv_nsec -= NSEC_PER_SEC;
        t->tv_sec++;
    }
}

static long ts_diff_ns(const struct timespec* a, const struct timespec* b) {
    return (a->tv_sec - b->tv_sec) * NSEC_PER_SEC + (a->tv_nsec - b->tv_nsec);
}

void* real_time_worker(void* arg) {
    run_stats* st = arg;

    // A. Pin to Cores 2 and 3
    set_thread_affinity();

    // B. Ask for the scheduling policy this run is meant to measure
    if (st->policy == POL_FIFO) {
        // Highest real-time priority. Runs ahead of every normal thread, but the
        // kernel never checks whether the work fits in the period.
        struct sched_param param;
        param.sched_priority = 99;

        int sched_error = pthread_setschedparam(pthread_self(), SCHED_FIFO, &param);
        if (sched_error != 0) {
            fprintf(stderr, "Failed to set real-time priority: %s (run with sudo)\n",
                    strerror(sched_error));
        } else {
            st->policy_ok = 1;
        }
    } else if (st->policy == POL_DEADLINE) {
        // EDF with enforcement: promise RUNTIME_NS of CPU every PERIOD_NS, and the
        // kernel throttles this thread the moment it overruns that budget.
        if (set_deadline_policy(RUNTIME_NS, PERIOD_NS, PERIOD_NS) != 0) {
            perror("sched_setattr SCHED_DEADLINE (needs sudo; EBUSY = admission control refused)");
        } else {
            st->policy_ok = 1;
        }
    }

    // C. High-Precision Real-Time Loop.
    // The deadline is absolute and advances by exactly PERIOD_NS every cycle, so a
    // late wake-up cannot push the following ones out — that is what makes the
    // schedule deterministic. usleep()/nanosleep() are relative and would let the
    // error accumulate forever.
    struct timespec next, now;
    clock_gettime(CLOCK_MONOTONIC, &next);

    double sum = 0;
    for (int i = 0; i < ITERATIONS; i++) {
        ts_add_ns(&next, PERIOD_NS);
        clock_nanosleep(CLOCK_MONOTONIC, TIMER_ABSTIME, &next, NULL);
        clock_gettime(CLOCK_MONOTONIC, &now);

        // Your critical execution work here

        long jitter = ts_diff_ns(&now, &next); // how late this cycle woke up
        if (jitter < st->min_ns) st->min_ns = jitter;
        if (jitter > st->max_ns) st->max_ns = jitter;
        sum += jitter;
        if (jitter > 50000)     st->over_50us++;
        if (jitter > 500000)    st->over_500us++;
        if (jitter >= PERIOD_NS) st->missed++; // a whole cycle was lost
    }
    st->avg_ns = sum / ITERATIONS;

    return NULL;
}

// Ordinary threads competing for the same two cores, so the two policies have
// something to be measured against.
static volatile int hogs_running = 1;

void* cpu_hog(void* arg) {
    (void)arg;
    set_thread_affinity();
    while (hogs_running) { }
    return NULL;
}


int main(int argc, char** argv)
{
    // FILE* file;

    // file = fopen("example.txt","w");
    // if (file==NULL)
    // {perror("file open failed");exit(1);}
    // char* text = "this is a text\nthe text is good\n";
    // fprintf(file,"%s",text);
    // fputs("this is from from fputs\n",file);
    // fprintf(file,my_format,1,2,3);
    // fclose(file);
    // file = fopen("example.txt","r");
    // if (file==NULL)
    // {perror("file2 open failed");exit(1);}
    // char inputline[100];
    // while(fgets(inputline,sizeof(inputline),file)!=NULL)
    // {
        // printf("read line:%s\n",inputline);
    // }
    int with_load = (argc > 1 && strcmp(argv[1], "--load") == 0);

    // Page faults are unbounded latency; lock everything in now.
    if (mlockall(MCL_CURRENT | MCL_FUTURE) != 0) {
        perror("mlockall (page faults may add jitter)");
    }

    pthread_t hogs[HOG_THREADS];
    if (with_load) {
        printf("running %d busy threads on cores 2-3 as competing load\n", HOG_THREADS);
        for (int i = 0; i < HOG_THREADS; i++) {
            pthread_create(&hogs[i], NULL, cpu_hog, NULL);
        }
    }

    run_stats runs[3] = {
        { .label = "SCHED_OTHER",    .policy = POL_OTHER,    .min_ns = LONG_MAX, .max_ns = LONG_MIN },
        { .label = "SCHED_FIFO 99",  .policy = POL_FIFO,     .min_ns = LONG_MAX, .max_ns = LONG_MIN },
        { .label = "SCHED_DEADLINE", .policy = POL_DEADLINE, .min_ns = LONG_MAX, .max_ns = LONG_MIN },
    };
    const int nruns = 3;

    for (int i = 0; i < nruns; i++) {
        printf("measuring %s ...\n", runs[i].label);
        pthread_t worker;
        pthread_create(&worker, NULL, real_time_worker, &runs[i]);
        pthread_join(worker, NULL);
    }

    hogs_running = 0;
    if (with_load) {
        for (int i = 0; i < HOG_THREADS; i++) {
            pthread_join(hogs[i], NULL);
        }
    }

    printf("\n%d cycles of %ld us  (jitter = how late each wake-up was)\n",
           ITERATIONS, PERIOD_NS / 1000);
    printf("%-24s %9s %9s %9s %9s %9s %9s\n",
           "policy", "min us", "avg us", "max us", ">50us", ">500us", "missed");
    for (int i = 0; i < nruns; i++) {
        // Without privileges an RT run is really SCHED_OTHER too, and the rows are
        // not comparable. Say so instead of showing a bogus contrast.
        char label[48];
        snprintf(label, sizeof(label), "%s%s", runs[i].label,
                 (runs[i].policy != POL_OTHER && !runs[i].policy_ok) ? " (DENIED)" : "");
        printf("%-24s %9.1f %9.1f %9.1f %9ld %9ld %9ld\n", label,
               runs[i].min_ns / 1000.0, runs[i].avg_ns / 1000.0, runs[i].max_ns / 1000.0,
               runs[i].over_50us, runs[i].over_500us, runs[i].missed);
    }

    return 0;
}
