#include<stdio.h>
#include<stdlib.h>
#include "greater.h"

int main(){
    int numb_1,numb_2;
    printf("Enter first number\n");
    scanf("%d",&numb_1);
    printf("Enter first number\n");
    scanf("%d",&numb_2);
    greater_number(numb_1,numb_2);
    return 0;
}