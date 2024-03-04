#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "func.h"

int main(){
    char arr[6] = "Ahmed";
    int ret;
    fun(arr,&ret);
    int resul = strlen(arr);
    printf("%d\n",ret);
    printf("%d\n",resul);
    return 0;
}
