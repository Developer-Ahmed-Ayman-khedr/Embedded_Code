#include<stdio.h>
#include<stdlib.h>
#include "func.h"

int main(){
    int arr[4] = {10,20,30,40};
    printf("%d\n",arr[2]);
    arr[2] = 100;
    printf("%d\n",arr[2]);
    scanf("%d",&arr[2]);
    printf("%d\n",arr[2]);
    return 0;
}
