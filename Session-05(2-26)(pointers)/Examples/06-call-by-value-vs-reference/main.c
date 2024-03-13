#include<stdio.h>
#include<stdlib.h>
#include "func.h"

int main(){
    int number_1=20;
    printf("%d\n",number_1);
    fun(number_1);
    printf("%d\n",number_1);
    ptrfun(&number_1);
    printf("%d\n",number_1);
    return 0;
}
