#include<stdio.h>
#include<stdlib.h>

void swapp_using_third_variable(int number_1,int number_2){
    int temp=number_1;
    number_1=number_2;
    number_2=temp;
    printf("after swapping using a third variable\nx = %d\ty = %d\n",number_1,number_2);
}

void swapp_not_using_third_variable(int number_1,int number_2){
    number_1=number_1+number_2;
    number_2=number_1-number_2;
    number_1=number_1-number_2;
    printf("after swapping not using a third variable\nx = %d\ty = %d\n",number_1,number_2);
}