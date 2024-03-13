#include<stdio.h>
#include<stdlib.h>
#include "func.h"

int main(){
    int coun = 0, arr[5], i, number_to_search;
    for ( i = 0; i < 5; i++)
    {
        printf("Enter number:\n");
        scanf("%d",arr+i);
    }
    printf("Enter number to search for:\n");
    scanf("%d",&number_to_search);
    fun(arr,number_to_search,&coun);
    printf("repetation = %d",coun);
    return 0;
}
