#include<stdio.h>
#include<stdlib.h>
#include "func.h"

int main(){
    Welcome();
    void (*ptr)() = &Welcome; // pointer to function.
    (*ptr)();
    ptr=&hello; // changing the address in the pointer to hold the hello function.
    (*ptr)();
    callback(&hello);
    return 0;
}
