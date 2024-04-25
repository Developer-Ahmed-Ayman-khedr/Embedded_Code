#include<stdio.h>
#include<stdlib.h>

int greater_number(int number_1,int number_2){
    if (number_1>number_2)
    {
        return number_1;
    }
    else if(number_1<number_2)
    {
        return number_2;
    }
    else
    {
        return 0;
    }
}
