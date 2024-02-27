#include<stdio.h>
#include<stdlib.h>

int factorial(int number_1){
    if (number_1==1)
    {
        return 1;
    }
    else
    {
        return number_1*factorial(number_1-1);
    }
}
