#include<stdio.h>
#include<stdlib.h>
#include "func.h"

int main(){
    int i, arr[5];
    for ( i = 0; i < 5; i++)
    {
        printf("Enter number:\n");
        scanf("%d",arr+i);
    }
    fun(arr);
    return 0;
}
