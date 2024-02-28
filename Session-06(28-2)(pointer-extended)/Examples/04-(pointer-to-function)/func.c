#include<stdio.h>
#include<stdlib.h>

void hello(){
    printf("Hello.\n");
}

void Welcome(){
    printf("Welcome.\n");
}

void callback( void (*ptrfunc) () ){
    (*ptrfunc) (); // call to a function.
}