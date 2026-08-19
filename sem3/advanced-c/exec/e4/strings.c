#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void swap(char*c1,char*c2)
{
    char *temp = *c1;
    *c1 = *c2;
    *c2 = temp;
    
}
int polindrom(char *str)
{
    char *start = str;
    char *end = start + strlen(str)-1;
    int is_pal=1;
        while (end - start >=0)
        {
            printf("checking for %c %c\n",*end,*start);
            if ((*end) != (*start))
            {
                is_pal = 0;
                swap(start,end);
            }
            start++;
            end--;
        }
        puts(str);
        return is_pal;
}

void reverse(char*out)
{



}

int main()
{
    char str1[] = "123456\0";
    char str2[] = "12321\0";
    printf("is p:%d ",polindrom(str1));
    printf("is p:%d ",polindrom(str2));
    return 0;
}