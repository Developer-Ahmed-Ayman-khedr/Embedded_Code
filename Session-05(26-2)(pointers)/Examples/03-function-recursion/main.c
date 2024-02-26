#include<stdio.h>
#include<stdlib.h>
#include "func.h"

int main(){
    int numb;
    printf("Enter a number:\n");
    scanf("%d",&numb);
    int result=factorial(numb);
    printf("%d\n",result);
    return 0;
}
