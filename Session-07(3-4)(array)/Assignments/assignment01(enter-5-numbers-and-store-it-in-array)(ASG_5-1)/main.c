#include<stdio.h>
#include<stdlib.h>
#include "func.h"

int main(){
    int arr_1[5]={0};
    printf("Enter 5 numbers:\n");
    int i;
    for (i = 0; i < 5; i++)
    {
        scanf("%d",&arr_1[i]);
    }
    printf("Before sorting:\n");
    for ( i = 0; i < 5; i++)
    {
        printf("%d\t",arr_1[i]);
    }
    bubble_sort(arr_1);
    printf("\nAfter sorting:\n");
    for ( i = 0; i < 5; i++)
    {
        printf("%d\t",arr_1[i]);
    }
    search_max(arr_1);
    search_min(arr_1);
    return 0;
}
