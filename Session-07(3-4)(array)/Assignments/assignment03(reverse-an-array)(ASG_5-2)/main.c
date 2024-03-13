#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "func.h"

int main(){
    int arr[5] = {1,2,3,4,5};
    printf("Original array:\t");
    for (int i = 0; i <= 4; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\nReverse array:\t");
    for (int i = 4; i >= 0; i--)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}