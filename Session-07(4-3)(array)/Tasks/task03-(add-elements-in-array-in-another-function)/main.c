#include<stdio.h>
#include<stdlib.h>
#include "func.h"

int main(){
    int arr[4] = {10,20,30,40},sum=0,average=0;
    fun(arr,4,&sum,&average);
    printf("\n%d\n%d\n",sum,average);
    return 0;
}
