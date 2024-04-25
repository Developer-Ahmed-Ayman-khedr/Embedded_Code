#include<stdio.h>
#include<stdlib.h>
#include "func.h"

void swapp(int *arrptr, int i, int mink){
    int temp=arrptr[i];
    arrptr[i]=arrptr[mink];
    arrptr[mink]=temp;
}

void sort(int* arrptr,int size){
    int i, k, mink;
    for ( i = 0; i < size; i++)
    {
        mink=i;
        for ( k = i+1; k <size ; k++)
        {
            if (arrptr[k]<arrptr[mink])
            {
                mink=k;
            }
        }
        swapp(arrptr,i,mink);
    }
}

int main(){
    int arr[5]={5,10,3,1,200}, i;
    sort(arr,5);
    for ( i = 0; i < 5; i++)
    {
        printf("%d\n",arr[i]);
    }    
    return 0;
}
