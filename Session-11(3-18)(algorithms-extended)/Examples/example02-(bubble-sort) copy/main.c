#include<stdio.h>
#include<stdlib.h>
#include "func.h"

void swapp(int *arrptr, int num1, int num2){
    int temp=arrptr[num1];
    arrptr[num1]=arrptr[num2];
    arrptr[num2]=temp;
}

void bubble_sort(int* arrptr,int size){
    int i, k;
    for ( i = 0; i < size; i++)
    {
        for ( k = 0; k <size-i-1 ; k++)
        {
            if (arrptr[k]>arrptr[k+1])
            {
                swapp(arrptr,k,k+1);
            }
        }
    }
}

int main(){
    int arr[5]={5,10,3,1,200}, i;
    bubble_sort(arr,5);
    for ( i = 0; i < 5; i++)
    {
        printf("%d\n",arr[i]);
    }    
    return 0;
}
