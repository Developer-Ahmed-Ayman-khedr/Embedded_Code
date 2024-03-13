#include<stdio.h>
#include<stdlib.h>
#include "func.h"

int main(){
    int number_1,number_2;
    printf("Enter number 1\n");
    scanf("%d",&number_1);
    printf("Enter number 2\n");
    scanf("%d",&number_2);
    printf("before swapping\nx = %d\t",number_1);
    printf("y = %d\n",number_2);
    Swapfun(&number_1,&number_2);
    printf("after swapping\nx = %d\t",number_1);
    printf("y = %d\n",number_2);
    return 0;
}
