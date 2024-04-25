#include<stdio.h>
#include<stdlib.h>
#include "func.h"

int main(){
    int* arr[5]; // array that holds pointers to integers.
    int x = 10;
    int y = 20;
    arr[0] = &x;
    arr[1] = &y;

    printf("%d\n",arr[0]);// print the address of x.
    printf("%d\n",*arr[0]);// print what is inside the address of x.

    printf("%d\n",arr[1]);// print the address of x.
    printf("%d\n",*arr[1]);// print what is inside the address of y.

    int* ptr1;
    char* ptr2;
    printf("%d\t%d",sizeof(ptr1),sizeof(ptr1));
    return 0;
}
