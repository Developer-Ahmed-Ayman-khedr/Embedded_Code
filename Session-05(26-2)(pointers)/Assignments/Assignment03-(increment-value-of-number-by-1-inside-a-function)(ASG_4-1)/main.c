#include<stdio.h>
#include<stdlib.h>
#include "func.h"

int main(){
    int number;
    printf("Enter the value of x\n");
    scanf("%d",&number);
    printf("Before calling edit x = %d\n",number);
    edit(&number);
    printf("After calling edit x = %d\n",number);
    return 0;
}
