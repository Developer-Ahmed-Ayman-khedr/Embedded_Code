#include<stdio.h>
#include<stdlib.h>
#include "func.h"

int main(){
    int coun = 0, arr[5] = {1,3,4,3,5};
    fun(arr,3,&coun);
    printf("repetation = %d",coun);
    return 0;
}
