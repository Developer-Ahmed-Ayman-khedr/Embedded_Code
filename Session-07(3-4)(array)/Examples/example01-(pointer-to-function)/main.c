#include<stdio.h>
#include<stdlib.h>
#include "func.h"

int main(){
    void (*ptr)() = &fun;
    (*ptr)();
    return 0;
}
