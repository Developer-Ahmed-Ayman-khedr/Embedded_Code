#include<stdio.h>
#include<stdlib.h>
#include "func.h"

int main(){
    int number_1,number_2;
    scanf("%d",&number_1);
    scanf("%d",&number_2);
    int result = fun(number_1,number_2);
    printf("The summation = %d\n",result);
    return 0;
}
