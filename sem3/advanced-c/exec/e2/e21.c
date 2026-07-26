#include <stdlib.h>
#include <stdio.h>
#include <memory.h>


typedef struct Compelx
{
    double real;
    double img;
}Complex;



void print_complex(Complex z)
{
  char pref_real = '+';
  if (z.img<0)
  {
    z.img = -1*z.img;
    pref_real = '-';}
  printf("val:%.2lf %c %.2lfi --- ptr:%p\n",z.real,pref_real,z.img,&z);
}


void print_complex_by_ref(Complex *z)
{
  char pref_real = '+';
  short factor = 1;
  if (z->img<0)
  {
    factor = -1;
    pref_real = '-';}
  printf("ref:%.2lf %c %.2lfi --- ptr:%p\n",z->real,pref_real,factor *z->img,z);
  
}



void print_complex_by_ref2(Complex *z)
{
  char pref_real = '+';
  short factor = 1;
  if ((*z).img<0)
  {
    factor = -1;
    pref_real = '-';}
  printf("ref:%.2lf %c %.2lfi --- ptr:%p\n",(*z).real,pref_real,factor *(*z).img,z);
  
}

int main()
{

    Complex z2;
    z2.img = 1;
    z2.real = 2.6;
    Complex *z1_ptr = (Complex*)malloc(sizeof *z1_ptr * 2);
    print_complex(z2);
    print_complex_by_ref(&z2);
    printf("ptr::: %p\n\n", &z2);
    z2.img =-1;
    print_complex(z2);
    print_complex_by_ref(&z2);
    printf("ptr::: %p\n\n", &z2);
    return 0;

}