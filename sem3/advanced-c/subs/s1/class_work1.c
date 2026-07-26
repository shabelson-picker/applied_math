#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "utils.c"

#define EX1_ARR_SIZE 200
#define EX2_ARR_SIZE 20
#define EX4_ARR_SIZE 20


int *split_even_odd(int *baseArr, int arr_size, int **arr_odd, int *odd_size)
{
    printf("start");
    int odd_counter = 0;
    int even_counter = 0;
    for (int i = 0; i < arr_size; i++)
    {
        printf("%i %i / %i\n", baseArr[i], i, EX1_ARR_SIZE);
        if (baseArr[i] % 2 == 0)
        {
            even_counter++;
        }
        else
        {
            odd_counter++;
        }
    }
    printf("I got %i even and %i odd", even_counter, odd_counter);
    int *even_arr = (int *)malloc(sizeof(int) * even_counter);
    RETURN_NULL_ON_NULL(even_arr, "bad allocation:arr_even");
    if (*arr_odd != NULL)
    {
        free(*arr_odd);
    }
    (*arr_odd) = (int *)malloc(sizeof(int) * odd_counter);
    RETURN_NULL_ON_NULL(even_arr, "bad allocation:arr_odd");
    *odd_size = odd_counter;

    odd_counter = 0;
    even_counter = 0;
    for (int i = 0; i < arr_size; i++)
    {
        if (baseArr[i] % 2 == 0)
        {
            even_arr[even_counter++] = baseArr[i];
        }
        else
        {
            (*arr_odd)[odd_counter++] = baseArr[i];
        }
    }
    printf("even in func:\n");
    print_int_array(even_arr, even_counter);
    return even_arr;
}

void exec_1()
{

    int *int_arr = (int *)malloc(sizeof(int) * EX1_ARR_SIZE);
    radonm_populate_int_array(int_arr, EX1_ARR_SIZE);
    print_int_array(int_arr, EX1_ARR_SIZE);
    int *arr_odd = NULL;
    // RETURN_VOID_ON_NULL(arr_odd,"testing biathc");
    int odd_size;
    int *arr_even = split_even_odd(int_arr, EX1_ARR_SIZE, &arr_odd, &odd_size);
    printf("EVEN:\n");
    print_int_array(arr_even, EX1_ARR_SIZE - (odd_size));
    printf("ODD:");
    print_int_array(arr_odd, odd_size);
    free(arr_even);
    free(arr_odd);
    free(int_arr);
}

void bigcups_smallcaps(char arr[], int size, char **small, char **big, int *small_count, int *big_count)
{

    if ((*small) != NULL)
        free(*small);
    if ((*big) != NULL)
        free(*big);
    *small = (char *)malloc(sizeof(char) * size);
    RETURN_VOID_ON_NULL(small, "bad alloc-ex2-small");
    *big = (char *)malloc(sizeof(char) * size);
    RETURN_VOID_ON_NULL(small, "bad alloc-ex2-big");
    int small_counter = 0, big_counter = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] >= 'a' && arr[i] <= 'z')
        {
            (*small)[small_counter++] = arr[i];
        }
        if (arr[i] >= 'A' && arr[i] <= 'Z')
        {
            (*big)[big_counter++] = arr[i];
        }
    }
    *small_count = small_counter;
    *big_count = big_counter;
    *small = (char *)realloc(*small, small_counter);
    RETURN_VOID_ON_NULL(small, "bad realloc-ex2-small");
    *big = (char *)realloc(*big, big_counter);
    RETURN_VOID_ON_NULL(small, "bad realloc-ex2-big");
}

void bigcups_smallcaps_string(char arr[], int size, char **small, char **big, int *small_count, int *big_count)
{

    if ((*small) != NULL)
        free(*small);
    if ((*big) != NULL)
        free(*big);
    *small = (char *)malloc(sizeof(char) * size);
    RETURN_VOID_ON_NULL(small, "bad alloc-ex2-small");
    *big = (char *)malloc(sizeof(char) * size);
    RETURN_VOID_ON_NULL(small, "bad alloc-ex2-big");
    int small_counter = 0, big_counter = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] >= 'a' && arr[i] <= 'z')
        {
            (*small)[small_counter++] = arr[i];
        }
        if (arr[i] >= 'A' && arr[i] <= 'Z')
        {
            (*big)[big_counter++] = arr[i];
        }
    }
    (*small)[small_counter++] = '\0';
    (*big)[big_counter++] = '\0';
    *small_count = small_counter;
    *big_count = big_counter;
    *small = (char *)realloc(*small, small_counter);
    RETURN_VOID_ON_NULL(small, "bad realloc-ex2-small");
    *big = (char *)realloc(*big, big_counter + 1);
    RETURN_VOID_ON_NULL(small, "bad realloc-ex2-big");
}
void exec_2()
{
    char *char_arr = (char *)malloc(sizeof(char) * EX2_ARR_SIZE);
    RETURN_VOID_ON_NULL(char_arr, "exec2 - fail alloc1");
    random_populate_char_array(char_arr, EX2_ARR_SIZE);
    char *big = NULL;
    char *small = NULL;
    int small_size = 0, big_size = 0;
    print_char_array(char_arr, EX2_ARR_SIZE);
    bigcups_smallcaps(char_arr, EX2_ARR_SIZE, &small, &big, &small_size, &big_size);
    printf("SMALLCAPS: ");
    print_char_array(small, small_size);
    printf("BIGCAPS: ");
    print_char_array(big, big_size);
    free(small);
    free(big);
    free(char_arr);
}

void exec_2A()
{
    char *char_arr = (char *)malloc(sizeof(char) * EX2_ARR_SIZE + 1);
    RETURN_VOID_ON_NULL(char_arr, "exec2 - fail alloc1");
    char_arr[EX2_ARR_SIZE] = '\0';
    random_populate_char_array(char_arr, EX2_ARR_SIZE);
    char *big = NULL;
    char *small = NULL;
    int small_size = 0, big_size = 0;
    print_string(char_arr);
    bigcups_smallcaps_string(char_arr, EX2_ARR_SIZE, &small, &big, &small_size, &big_size);
    printf("SMALLCAPS: ");
    print_string(small);
    printf("BIGCAPS: ");
    print_string(big);
    free(small);
    free(big);
    free(char_arr);
}

void remove_dup_c(int *arr, int size, int **output_set, int *output_size)
{
    //void --gets  output arr and size by ref
    if (*output_set != NULL)
    {
        free(*output_set);
    }
    (*output_set) = (int *)malloc(sizeof(int) * size);
    RETURN_VOID_ON_NULL(output_set,"exe4 - remove dup - bad allocation");
    *output_size = 0;
    if (size == 0)
    {
        return;
    }
    (*output_set)[0] = arr[0];
    (*output_size)++;
    for (int i = 1; i < size; i++)
    {
        if (arr[i] == (*output_set)[(*output_size)-1]){continue;}
        (*output_set)[(*output_size)++] = arr[i];
    }
}

int* remove_dup_b(int *arr, int size,  int *output_size)
{
    //gets output size to fill, returns ptr
    int *output_set = (int *)malloc(sizeof(int) * size);
    RETURN_NULL_ON_NULL(output_set,"exe4 - remove dup - bad allocation");
    *output_size = 0;
    if (size == 0)
    {
        return NULL;
    }
    output_set[0] = arr[0];
    (*output_size)++;
    for (int i = 1; i < size; i++)
    {
        if (arr[i] == output_set[(*output_size)-1]){continue;}
        output_set[(*output_size)++] = arr[i];
    }
    return output_set;
}
int remove_dup_a(int *arr, int size, int **output_set)
{
    // get set ptr, returns size
    if (*output_set != NULL)
    {
        free(*output_set);
    }
    (*output_set) = (int *)malloc(sizeof(int) * size); // alocate max
    RETURN_MONE_ON_NULL(output_set,"exe4 - remove dup - bad allocation");
    int output_size = 0;
    if (size == 0)
    {
        return -1;
    }
    (*output_set)[0] = arr[0];
    output_size++;
    for (int i = 1; i < size; i++)
    {
        if (arr[i] == (*output_set)[output_size-1]){continue;}
        (*output_set)[output_size++] = arr[i];
    }
    (*output_set) = (int*)realloc(*output_set, sizeof(int)*output_size);
    return output_size;
}






void exec_4()
{
    


    //setup
    int *arr = (int *)malloc(sizeof(int) * EX4_ARR_SIZE);
    int none_dups = populte_monotonic_arr_with_dups(arr, EX4_ARR_SIZE);
    print_int_array(arr, EX4_ARR_SIZE);
    
    
    //rdup_a
    int *int_set = NULL;
    int res_size_a  = remove_dup_a(arr, EX4_ARR_SIZE, &int_set);
    print_int_array(int_set, res_size_a);
    printf("result: %i\n", none_dups == res_size_a);
    free(int_set);
    
    //rdup_b
    int res_size_b = 0;
    int_set = remove_dup_b(arr, EX4_ARR_SIZE, &res_size_b);
    print_int_array(int_set, res_size_b);
    printf("result: %i\n", none_dups == res_size_b);
    free(int_set);
    

    //rdup_c
    int_set = NULL;
    int res_size_c = 0;
    remove_dup_c(arr, EX4_ARR_SIZE, &int_set, &res_size_c);
    print_int_array(int_set, res_size_c);
    printf("result: %i\n", none_dups == res_size_c);
    free(int_set);


    
    free(arr);







}
int main()
{
    srand(time(NULL));
    exec_4();
    printf("\ndone\n");
    return 0;
}