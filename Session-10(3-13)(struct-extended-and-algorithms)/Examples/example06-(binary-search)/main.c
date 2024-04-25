#include<stdio.h>
#include<stdlib.h>
#include "func.h"

int main(){
    int arr[8] = {9,12,15,20,25,28,32,40}, number;
    printf("Enter number to search for:\n");
    scanf("%d",&number);
    int result = binary_search(arr,sizeof(arr)-1,number);
    if (result==-1)
    {
        printf("Not found\n");
    }
    else
    {
        printf("The possition is: %d\n",result);
    }
    return 0;
}
