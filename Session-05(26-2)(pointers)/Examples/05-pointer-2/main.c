#include<stdio.h>
#include<stdlib.h>
#include "func.h"

int main(){
    char numb=10;
    char* ptr = &numb; // make a pointer to a variable.
    printf("%d\n",*ptr);
    (*ptr)++;
    printf("\n%d\n",*ptr);
    ++*ptr;
    printf("\n%d\n",*ptr);
    *ptr++;
    printf("\n%d\n",*ptr);
    return 0;
}
