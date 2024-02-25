#include<stdio.h>
#include<stdlib.h>

void greater_number(int number_1,int number_2){
    if (number_1>number_2)
    {
        printf("x = %d   >   y = %d\n",number_1,number_2);
    }
    else if(number_1<number_2)
    {
        printf("x = %d   <   y = %d\n",number_1,number_2);
    }
    else
    {
        printf("x = %d   =   y = %d\n",number_1,number_2);
    }
}
