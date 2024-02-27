#include<stdio.h>
#include<stdlib.h>
#include "func.h"

int main(){
    int number_of_terms;
    printf("Enter the number of terms\n");
    scanf("%d",&number_of_terms);
    if (number_of_terms==1)
    {
        printf("Fibonacci Series: 0");
    }
    else if (number_of_terms==2)
    {
        printf("Fibonacci Series: 0, 1");
    }
    else
    {
        printf("Fibonacci Series: 0, 1, ");
        fibonacci(number_of_terms-2);
    }
    return 0;
}
