#include<stdio.h>
#include<stdlib.h>

void fun(int* arrptr, int numb, int* ptr2){
    int i;
    for ( i = 0; i < 5; i++)
    {
        if (arrptr[i]==numb)
        {
            ++*ptr2;
        }
    }
}
