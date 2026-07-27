#include <stdio.h>
#include <stdlib.h>
#include "utils.h"

#define Q2_ARR1_SIZE 10
#define Q2_ARR2_SIZE 13

void *rerealloc(void *memblock, unsigned size_old, unsigned size_new)
{
    // try alloc new block
    printf("size of char: %li", sizeof(char));

    char *temp = (char *)malloc(size_new);
    if (temp == NULL)
        return NULL;
    char *temp_head = temp;
    char *memblock_head = memblock;
    
    size_t copy_size = (size_old < size_new) ? size_old : size_new;

    for (size_t i = 0; i < copy_size; i++)
    {
        *temp_head = *(char *)(memblock_head);
        printf("C:%i\n", *temp_head);
        temp_head += 1;
        memblock_head += 1;
    }
    printf("\n ptrs::%p %p\n", memblock, (char *)memblock_head);
    if (memblock !=NULL) free(memblock);
    return temp;
}

void q1()
{
    int *arr = (int *)malloc(sizeof(int) * 5);
    for (int i = 0; i < 5; i++)
    {
        arr[i] = i;
    }
    printf("pre\n");
    print_int_array(arr, 5);
    int *arr2 = (int *)rerealloc(arr, 5 * sizeof(int), 6 * sizeof(int));
    arr2[5] = 6;
    print_int_array(arr2, 6);
    printf("post\n");
}

int *arrcat(int *arr1, unsigned size1, int *arr2, unsigned size2)
{
    int *temp = rerealloc(arr1, size1 * sizeof(int), (size1 + size2) * sizeof(int));
    printf("mid arrcat:");
    print_int_array(temp, size1 + size2);
    if (temp == NULL)
        return NULL;
    for (size_t i = 0; i < size2; i++)
    {
        temp[i + size1] = arr2[i];
    }
    // arr1 - freed in rerealloc
    return temp;
}

void q2()
{
    int *arr1 = (int *)malloc(sizeof(int) * Q2_ARR1_SIZE);
    int *arr2 = (int *)malloc(sizeof(int) * Q2_ARR2_SIZE);
    populte_monotonic_arr_no_dups(arr1, Q2_ARR1_SIZE);
    populte_monotonic_arr_no_dups(arr2, Q2_ARR2_SIZE);
    printf("arr1:pre");
    print_int_array(arr1, Q2_ARR1_SIZE);
    printf("arr2:pre");
    print_int_array(arr2, Q2_ARR2_SIZE);

    int *temp = arrcat(arr1, Q2_ARR1_SIZE, arr2, Q2_ARR2_SIZE);
    if (temp != NULL)
    {
        // temp is not null, arr1 was freed
        printf("arrcat success");
        arr1 = temp;
        print_int_array(temp, Q2_ARR1_SIZE + Q2_ARR2_SIZE);
    }
    else
    {
        // temp is null, arr1 unchanged
        printf("arrcat fail");
    }
    free(arr1);
    free(arr2);
}
int find(int item, int size_a, int *arr)
{
    // check for a in unsorted arr - returns -1 / index if found
    for (int i = 0; i < size_a; i++)
    {
        if (item == arr[i])
            return i;
    }
    return -1;
}

int *copy_dyn_arry(int *arr, int size)
{
    int *nArr = (int *)malloc(sizeof(int) * size);
    for (int i = 0; i < size; i++)
    {
        nArr[i] = arr[i];
    }
    return nArr;
}
int *A_minus_B(int *arrA, int size_a, int *arrB, int size_b, int *size_res)
{
    printf("a\\b start \n");
    if (arrB == NULL)
    {
        return copy_dyn_arry(arrA, size_a);
    }
    if (arrA == NULL)
    {
        return NULL;
    }
    printf("---1-1-1-1-1-1-1-1-1\n");
    printf("%li", (size_a + size_b) * sizeof(int));
    printf("---1-1-1-1-1-1-1-1-1\n\n\n");

    int *C = (int *)malloc((size_a + size_b) * sizeof(int));
    printf("alloc");
    if (C == NULL)
    {
        printf("bad allocation");
        return NULL;
    }
    int c_front = 0;
    for (int i = 0; i < size_a; i++)
    {
        if (find(arrA[i], size_b, arrB) > -1)
        {
            C[c_front++] = arrA[i];
        }
    }
    printf("2-");
    C = rerealloc(C, sizeof(int) * (size_a + size_b), sizeof(int) * c_front);
    printf("3-");
    (*size_res) = c_front;
    return C;
}

void q3()
{
    int A[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int B1[] = {1, 2, 3, 4};
    int B2[] = {11, 12, 13, 14};
    printf("ptr pre loop:%p\n", B2);
    int B3[] = {6, 11, 7, 11, 8};
    int *B4 = NULL;
    int *BSS[] = {B1, B2, B3, B4};
    int sizes[] = {8, 4, 4, 0};
    int *c_arr_ptr;
    int size_c = 0;
    printf("pre:A::\t");
    print_int_array(A, 8);

    for (int current_b = 0; current_b < 4; current_b++)
    {
        printf("=======>\n");
        printf("pre:B::\t");
        printf("ptr in loop:%p\n", BSS[current_b]);
        print_int_array(BSS[current_b], sizes[current_b]);
        printf("bef a/b\n");
        c_arr_ptr = A_minus_B(A, 8, BSS[current_b], sizes[current_b], &size_c);
        printf("post:A\\B::\t");
        print_int_array(c_arr_ptr, size_c);
        printf("=======<\n");
        free(c_arr_ptr);
    }
}
int main(int argc, char **argv)
{
    for (int i = 0; i < argc; i++)
    {

        switch (argv[i][0])
        {
        case '1':
            q1();
            break;
        case '2':
            q2();
            break;
        case '3':
            q3();
            break;

        default:
            break;
        }
    }
    return 0;
}