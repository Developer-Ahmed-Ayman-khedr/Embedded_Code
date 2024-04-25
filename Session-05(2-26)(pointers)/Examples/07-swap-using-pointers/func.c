#include<stdio.h>
#include<stdlib.h>

void Swapfun(int* ptr_1,int* ptr_2){
    int ptr_3=*ptr_1;
    *ptr_1=*ptr_2;
    *ptr_2=ptr_3;
}
