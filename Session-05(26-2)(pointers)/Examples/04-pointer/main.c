#include<stdio.h>
#include<stdlib.h>
#include "func.h"

int main(){
    int numb;
    int* ptr = &numb; // make a pointer to a variable.
    printf("Enter a number:\n");
    scanf("%d",&numb);
    printf("Address = %d\n",ptr);
    printf("Address = %d\n",&numb);
    printf("Value = %d\n",*ptr); // reference (what the address holds).
    *ptr=20; // change the value in the address that was saved in the pointer.
    printf("\nAddress = %d\n",ptr);
    printf("Address = %d\n",&numb);
    printf("Value = %d\n",*ptr); // reference (what the address holds).
    return 0;
}
