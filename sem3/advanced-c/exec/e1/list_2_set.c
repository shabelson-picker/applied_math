#include <stdio.h>
#include <stdlib.h>

#include <math.h>
#define N 10

void RemoveDups(int *arr, int n, int **res, int *size) // <=== why res is **? becuase we want to write to the ADDRESS of set not to the set itself
{
    int count = 1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] != arr[i - 1])
        {
            printf("%d || %d / [%d]\n ", arr[i], arr[i - 1], i);
            count++;
        }
    }
    *res = (int *)malloc(sizeof(int) * count);
    (*res)[0] = arr[0];
    printf("============\n");
    (*size) = count;
    count = 1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] != arr[i - 1])
        {
            printf("%d<<====    %d [%d]\n",arr[i],arr[i-1],count );
            (*res)[count++] = arr[i];
        }
    }
    printf("\n");
    for (int i = 0; i < (*size); i++)
    {
        printf("%d [%d]\n", (*res)[i],i);
    }
    printf("\n");
    
    printf("size:%d\n", *size);
}

void* realloc1(void *memBlock, unsigned sizeOld, unsigned sizeNew)
{
    char *newBlock = malloc(sizeNew);
    unsigned cp_size;

    if (sizeOld < sizeNew){cp_size = sizeOld;}
    else{cp_size =sizeNew;}

    for (unsigned i = 0; i < cp_size; i++)
    {
        ((char *)newBlock)[i] = ((char *)memBlock)[i];
    }
    return newBlock;
}

int main(void)
{
    int size;
    int list[16] = {1, 2, 3, 3, 3,3,3,3,3,3 ,4, 5, 5, 5, 5, 5};
    
    int *set = NULL;
    RemoveDups(list, 16, &set, &size);
    printf("=========\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d [%d]\n", set[i],i);
    }
    printf("\n");
    free(set);
    return 0;
}
