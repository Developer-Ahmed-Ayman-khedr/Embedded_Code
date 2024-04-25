#include<stdio.h>
#include<stdlib.h>
#include "func.h"

int main(){
    int numb,numb_2;
    int* ptr = &numb; // make a pointer to a variable.
    printf("Enter a number:\n");
    scanf("%d",&numb);
    printf("Enter a number:\n");
    scanf("%d",&numb_2);
    printf("Address = %d\n",ptr);
    printf("Address = %d\n",&numb);
    printf("Value = %d\n",*ptr); // reference (what the address holds).
    *ptr=20; // change the value in the address that was saved in the pointer.
    printf("\nAddress = %d\n",ptr);
    printf("Address = %x\n",&numb); // print address in hexa-disimal.
    printf("Value = %d\n",*ptr); // reference (what the address holds).
    printf("Value = %d\n",*ptr); // reference (what the address holds).
    ptr = &numb_2; // change the value in the address that was saved in the pointer.
    printf("\nAddress = %d\n",ptr);
    printf("Address = %x\n",&numb); // print address in hexa-disimal.
    printf("Value = %d\n",*ptr); // reference (what the address holds).
    return 0;
}
