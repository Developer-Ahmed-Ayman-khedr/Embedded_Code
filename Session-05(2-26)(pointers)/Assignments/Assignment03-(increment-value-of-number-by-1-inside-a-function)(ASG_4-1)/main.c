#include<stdio.h>
#include<stdlib.h>
#include "func.h"

int main(){
    int number[4];
    printf("Enter the value of x\n");
    scanf("%d",&number[0]);
    printf("Before calling edit x = %d\n",number[0]);
    edit(number);
    printf("After calling edit x = %d\n",number[0]);
    printf("%d\n",number[1]);
    printf("%d\n",number[2]);
    printf("%d\n",number[3]);
    return 0;
}
