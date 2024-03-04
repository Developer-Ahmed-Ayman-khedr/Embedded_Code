#include<stdio.h>
#include<stdlib.h>

void fun(char* ptrarr, int* rete){
    int i=0;
    while (ptrarr[i]!=0)
    {
        i++;
    }
    *rete = i;
}