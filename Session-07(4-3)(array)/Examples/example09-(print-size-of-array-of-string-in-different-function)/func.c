#include<stdio.h>
#include<stdlib.h>

void fun(char* ptrarr){
    int i=0;
    while (ptrarr[i]!=0)
    {
        i++;
    }
    printf("%d\n",i);
}
