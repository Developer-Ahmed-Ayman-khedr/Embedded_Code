#include<stdio.h>
#include<stdlib.h>
#include "func.h"

int main(){
    callback(&userfunc1);
    callback(userfunc2); //The name of the function is an address
    return 0;
}
