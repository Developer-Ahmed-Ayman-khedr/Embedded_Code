#include<stdio.h>
#include<stdlib.h>

int fun(char* ptrarr){
    int i=0;
    while (ptrarr[i]!=0)
    {
        i++;
    }
    return i;
}
