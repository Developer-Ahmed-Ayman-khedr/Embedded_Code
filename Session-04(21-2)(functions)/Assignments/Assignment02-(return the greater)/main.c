#include<stdio.h>
#include<stdlib.h>
#include "greater.h"

int main(){
    int numb_1,numb_2;
    printf("Enter first number\n");
    scanf("%d",&numb_1);
    printf("Enter first number\n");
    scanf("%d",&numb_2);
    int great=greater_number(numb_1,numb_2);
    if (great==0)
    {
        printf("%d   =   %d\n",numb_1,numb_2);
    }
    else
    {
        printf("%d\tis greater\n",great);
    }
    return 0;
}