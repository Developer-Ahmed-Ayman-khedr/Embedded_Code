#include<stdio.h>
#include<stdlib.h>
#include "func.h"

int main(){
    int arr[4] = {10,20,30,40},i;
    for (i = 0; i < 4; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (i = 0; i < 4; i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}
