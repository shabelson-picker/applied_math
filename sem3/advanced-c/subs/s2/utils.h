#ifndef UTILS_H_
#define UTILS_H_

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define RANGE 20
#define DELTA_MAX 10

#define RETURN_NULL_ON_NULL(arr, msg)     \
    if ((arr) == NULL)                    \
    {                                     \
        printf("Arg is null: %s", (msg)); \
        return NULL;                      \
    }
#define RETURN_VOID_ON_NULL(arr, msg)     \
    if ((arr) == NULL)                    \
    {                                     \
        printf("Arg is null: %s", (msg)); \
        return;                           \
    }
#define RETURN_MONE_ON_NULL(arr, msg)     \
    if ((arr) == NULL)                    \
    {                                     \
        printf("Arg is null: %s", (msg)); \
        return -1;                        \
    }

/* printing helpers */
void print_int_array(int *arr, int size);
void print_char_array(char *arr, int size);
void print_string(char *str);

/* random population helpers */
void radonm_populate_int_array(int *arr, int size);
void random_populate_char_array(char *arr, int size);

/* fills arr with a non-decreasing sequence containing duplicates;
   returns the number of non-duplicate (strictly increasing) entries */
int populte_monotonic_arr_with_dups(int *arr, int size);
void populte_monotonic_arr_no_dups(int *arr, int size);

#endif /* UTILS_H_ */
