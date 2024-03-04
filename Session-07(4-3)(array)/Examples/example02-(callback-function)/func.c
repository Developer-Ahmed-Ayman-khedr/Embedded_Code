#include<stdio.h>
#include<stdlib.h>

void stampa(void (*ptr)()){
    printf("Hello.\n");
    // (*ptr)(); // the address in the pointer is an address to a function.
    ptr();
    printf("Bye.\n");
}
void userfunc1(){
    printf("1234.\n");
}
void userfunc2(){
    printf("5678.\n");
}
