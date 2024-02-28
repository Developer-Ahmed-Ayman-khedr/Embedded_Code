#include<stdio.h>
#include<stdlib.h>
#include "func.h"

int main(){
    int number_1 = 0x99887766;
    int *ptr1 = &number_1;
    char *ptr2 = &number_1;
    short int *ptr3 = &number_1;
    printf("%x\n",*ptr1);
    printf("%x\n",*ptr2);
    printf("%x\n",*ptr3);
    ptr2++;
    *ptr2 = 0x11;
    printf("\n%x\n",*ptr1);
    printf("%x\n",*ptr2);
    printf("%x\n",*ptr3);
    return 0;
}
