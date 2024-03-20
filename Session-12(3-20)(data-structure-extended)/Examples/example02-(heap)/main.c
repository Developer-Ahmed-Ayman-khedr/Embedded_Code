#include<stdio.h>
#include<stdlib.h>
#include "func.h"

int main(){
    int *ptr=(int*)malloc(2*sizeof(int));//(to cast the type to be int)memory allocation(size in bytes).
    ptr[0]=10;
    ptr[1]=20;
    char* ptr2=(char*)calloc(2,1);//calulate allocation(nummber of elements, size in bytes) and zero the elements.
    int* ptr2=(int*)calloc(2,2*sizeof(int));//calulate allocation(nummber of elements, size in bytes) and zero the elements.
    
    return 0;
}
