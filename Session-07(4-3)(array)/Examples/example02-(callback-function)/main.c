#include<stdio.h>
#include<stdlib.h>
#include "func.h"

int main(){
    stampa(&userfunc1);
    stampa(userfunc2); //The name of the function is an address
    return 0;
}
