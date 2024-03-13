#include<stdio.h>
#include<stdlib.h>

int fun(int* arrptr){
    int maxx =1, i;
    for ( i = 0; i < 6; i++)
    {
        if (arrptr[i]>=maxx)
        {
            maxx = arrptr[i];
        }
    }
    return maxx;
}
