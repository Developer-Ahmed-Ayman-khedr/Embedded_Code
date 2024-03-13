#include<stdio.h>
#include<stdlib.h>
#include "func.h"

struct complex
{
    float real,imaginary;
};


int main(){
    struct complex c[2],sum={0,0};
    int i;
    for ( i = 0; i < 2; i++)
    {
        printf("For complex number %d\n",i+1);
        printf("Enter real and imaginary part respectively:\n");
        scanf("%f",&c[i].real);
        scanf("%f",&c[i].imaginary);
    }
    sum.real = c[0].real+c[1].real;
    sum.imaginary = c[0].imaginary+c[1].imaginary;
    printf("Sum = %0.1f + %0.1fi\n",sum.real,sum.imaginary);
    return 0;
}
