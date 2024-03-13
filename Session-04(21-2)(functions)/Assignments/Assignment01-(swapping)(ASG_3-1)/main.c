#include<stdio.h>
#include<stdlib.h>
#include "swap.h"

int main(){
    int numb_1,numb_2;
    printf("Enter first number\n");
    scanf("%d",&numb_1);
    printf("Enter first number\n");
    scanf("%d",&numb_2);
    printf("before swapping\nx = %d\ty = %d\n",numb_1,numb_2);
    swapp_using_third_variable(numb_1,numb_2);
    swapp_not_using_third_variable(numb_1,numb_2);
    return 0;
}