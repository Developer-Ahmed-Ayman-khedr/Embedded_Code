#include<stdio.h>
#include<stdlib.h>

void fun(char* ptrarr){
    int i=0,counter=0;
    while (ptrarr[i]!=0)
    {
        counter++;
        i++;
    }
    printf("%d\n",counter);
}
