#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include <unistd.h>



int main()
{

    char arr1[3] = {0}, arr2[5] = {0};
    
    printf("arr1 len:%ld arr2 len:%ld\n",strlen(arr1),strlen(arr2));
    fgets(arr1,sizeof(arr1),stdin);
    printf("arr1:%s\n",arr1);
    
    fgets(arr2,sizeof(arr2),stdin);
    printf("arr2:%s\n",arr2);
    
    for(int i =0 ; i<sizeof(arr1);i++)
    {
        printf("'%c' ",arr1[i]);
    }
    printf("\n----\n");
    for(int i =0 ; i<sizeof(arr2);i++)
    {
        printf("'%c' ",arr2[i]);
    }

    char *str="hello", *c ="cpp";
    printf("pre:%s %p %p\n",c,str,c);
    c = str;
    printf("post:%s %p %p\n",c,str,c);


    return 0;
}