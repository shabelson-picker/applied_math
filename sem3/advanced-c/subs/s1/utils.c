#ifndef UTILS_C_
#define UTILS_C_

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
        return -1;                         \
    }

void print_int_array(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%i | ", arr[i]);
    }
    printf("\n");
}

void print_char_array(char *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%c | ", arr[i]);
    }
    printf("\n");
}
void print_string(char *str)
{
    printf("str : %s\n", str);
}

void radonm_populate_int_array(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = (rand() % RANGE) + 1;
    }
}

void random_populate_char_array(char *arr, int size)
{
    int max = 'z';
    int min = 'A';
    int low_r = 'Z';
    int high_r = 'a';
    int counter = 0;
    int temp;
    while (counter < size)
    {
        temp = (rand() % (max - min)) + min;
        if (temp > low_r && temp < high_r)
        {
            // printf("discard %c \n",temp);
            continue;
        }
        // printf("accpet %c \n",temp);
        arr[counter++] = temp;
    }
}

int populte_monotonic_arr_with_dups(int *arr, int size)
{
    // returns number of none dups

    int delta = 0;
    int toggle = 0;
    arr[0] = 1;
    int none_dups = 1;
    for (int i = 1; i < size; i++)
    {
        printf("toggle:%i delta:%i\n", toggle < 5, delta);
        if (toggle < 5)
        {
            delta = rand() % DELTA_MAX;
        }
        else
        {
            delta = 0;
            none_dups++;
        }
        arr[i] = arr[i - 1] + delta;
        toggle = rand() % 10;
    }
    return none_dups;
}
#endif