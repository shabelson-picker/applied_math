#ifndef COMPLEX_H_
#define COMPLEX_H_

typedef struct complex{
    double real;
    double img;
}Complex;

void display_your_complex(Complex z);
Complex complex_addition(Complex z1,Complex z2);
Complex complex_subtraction(Complex z1,Complex z2);
Complex complex_multiplication(Complex z1,Complex z2);
int get_users_complex(Complex *z);

#endif


