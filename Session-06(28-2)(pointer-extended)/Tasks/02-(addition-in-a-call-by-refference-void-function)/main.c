#include<stdio.h>
#include<stdlib.h>
#include "func.h"

int main(){
    int number_1,number_2,result;
    printf("Enter number 1\n");
    scanf("%d",&number_1);
    printf("Enter number 2\n");
    scanf("%d",&number_2);
    addition(&number_1,&number_2,&result);
    printf("The result = %d\n",result);
    return 0;
}
