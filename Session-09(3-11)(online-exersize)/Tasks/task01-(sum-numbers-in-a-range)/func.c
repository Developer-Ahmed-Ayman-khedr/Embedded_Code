#include<stdio.h>
#include<stdlib.h>

int fun(int num_1,int num_2){
    int sum = 0;
    while (num_1 != num_2+1)
    {
        sum+=num_1;
        num_1++;
    }
    return sum;
}
