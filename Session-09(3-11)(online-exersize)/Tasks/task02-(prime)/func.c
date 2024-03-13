#include<stdio.h>
#include<stdlib.h>

void fun(int num_1){
    if (num_1==2)
    {
        printf("Prime.\n");
        return;
    }
    else if (num_1<2)
    {
        printf("Error.\n");
        return;
    }
    int i, flage = 0;
    for ( i = 2; i <= num_1/2; i++)
    {
        if (num_1%i==0)
        {
            flage = 0;
            break;
        }
        else
        {
            flage = 1;
        }
    }
    if (flage==1)
    {
        printf("Prime.\n");
    }
    else if (flage==0)
    {
        printf("Not prime.\n");
    }
    return;
}
