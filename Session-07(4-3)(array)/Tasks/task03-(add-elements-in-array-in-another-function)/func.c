#include<stdio.h>
#include<stdlib.h>

int fun(int* ptrarr){
    int i,sum=0,average=0;
    for ( i = 0; i < 4; i++)
    {
        printf("%d ",ptrarr[i]);
        sum+=ptrarr[i];
    }
    average=sum/4;
    printf("\n%d\n",sum);
    return average;
}
