#include <stdio.h>
#include <stdlib.h>
#include "utils.h"
#include "complex.h"



void display_your_complex(Complex z)
{
    int i_factor =1;
    char i_prefix = '+';
    if (z.img<0)
    {
        i_factor = -1;
        i_prefix ='-';
    }
    
    printf("%0.3f %c %0.3fi\n",z.real,i_prefix,i_factor*z.img);
}

Complex complex_addition(Complex z1,Complex z2)
{
    Complex res;
    res.real = z1.real + z2.real;
    res.img = z1.img + z2.img;
    return res;
}
Complex complex_subtraction(Complex z1,Complex z2)
{
    Complex res;
    res.real = z1.real - z2.real;
    res.img = z1.img - z2.img;
    return res;
}


Complex complex_multiplication(Complex z1,Complex z2)
{
    Complex res;
    res.real = z1.real * z2.real - z1.img*z2.img;
    res.img = z1.real*z2.img + z1.img*z2.real;
    return res;
}

int  get_users_complex(Complex *z)
{
    float R,i;
    int ret = 0;
    printf("Hello, I'm a friendly gui, can you please input your complex?\n");
    ret = set_float(&R,'R');
    if (ret ==-1)
    {return -1 ;}
    printf("Good Boy / Girl, \nnow");
    ret = set_float(&i,'i');
    if (ret ==-1){return ;}
    z->img = i; z->real=R;
    printf("God Bless your heart\n");
    printf("that's YOUR complex : ");
    display_your_complex(*z);
    printf("\n");
    return 0;
}




