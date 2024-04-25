#include<stdio.h>
#include<stdlib.h>
#include "func.h"

int main(){
    int number_to_get,power_to_get, ret = 1;
    printf("enter number:\n");
    scanf("%d",&number_to_get);
    printf("enter power:\n");
    scanf("%d",&power_to_get);
    fun(number_to_get,power_to_get,&ret);
    printf("The return = %d\n",ret);
    return 0;
}
