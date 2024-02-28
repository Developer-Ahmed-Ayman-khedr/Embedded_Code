#include<stdio.h>
#include<stdlib.h>
#include "func.h"

int main(){
    const int number_1 = 10;
    int* ptr_1 = &number_1;
    *ptr_1 = 20;
    printf("%d\n",number_1);


    int number_2 = 10;
    const int* ptr_2 = &number_2;
    ptr_2++;
    // *ptr_2 = 20; // error.
    printf("%d\n",*ptr_2);
    printf("%d\n",number_2);
    
    
    int number_3 = 10;
    int* const ptr_3 = &number_3;
    // ptr_3++; // error.
    *ptr_3 = 20;
    printf("%d\n",*ptr_3);
    printf("%d\n",number_3);
    return 0;
}
