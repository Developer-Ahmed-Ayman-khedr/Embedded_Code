#include<stdio.h>
#include<stdlib.h>

void fun(int* ptrarr, int* summ, int* aver){
    int i;
    for ( i = 0; i < 4; i++)
    {
        printf("%d ",ptrarr[i]);
        *summ+=ptrarr[i];
    }
    *aver=*summ/4;
}
