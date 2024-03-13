#include<stdio.h>
#include<stdlib.h>

void fun(int* ptrarr){
    int i;
    for ( i = 0; i < 4; i++)
    {
        printf("%d ",ptrarr[i]);
    }
}
