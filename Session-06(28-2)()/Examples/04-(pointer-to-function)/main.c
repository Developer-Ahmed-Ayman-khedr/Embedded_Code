#include<stdio.h>
#include<stdlib.h>
#include "func.h"

int main(){
    Welcome();
    void (*ptr)() = &Welcome; // pointer to function.
    (*ptr)();
    ptr=&hello;
    (*ptr)();
    return 0;
}
