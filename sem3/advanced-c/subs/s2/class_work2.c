#include <stdio.h>
#include <stdlib.h>
#include "utils.h"



void * rerealloc(void * memblock,unsigned size_old, unsigned size_new)
{   
    //try alloc new block
    printf("size of char: %li",sizeof(char));
    
    char*temp =(char*) malloc(size_new);
    char*temp_head =temp;
    char*memblock_head =memblock;
    if (temp==NULL) return NULL;
    for (size_t i=0;i<size_old; i++)
    {
     printf("\n%p  || %p\n",memblock_head,temp_head);
    
     *temp_head =*((char*)memblock_head);
     temp_head++;
     memblock_head++;        
    }
    printf("\n ptrs::%p %p\n",memblock,(char*)memblock_head);
    free (memblock);
    return temp;
}


void q1()
{
    int * arr = (int*)malloc(sizeof(int)*5);
    for (int i=0;i<5;i++)
    {
        arr[i] = i;
    }
    printf("pre\n");
    print_int_array(arr,5);
    int *arr2 = (int*)rerealloc(arr,5*sizeof(int),6*sizeof(int));
    arr2[5]= 6;
    print_int_array(arr2,6);
    printf("post\n");
}


void q2()
{
    
}




int main(int argc, char** argv)
{
    for (int i=0;i<argc;i++)
    {
        if (argv[i][0] =='1'){q1();}
    }
    return 0;
}