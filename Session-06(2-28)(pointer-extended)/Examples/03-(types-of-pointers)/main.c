#include<stdio.h>
#include<stdlib.h>
#include "func.h"

int main(){
    int number = 10;
    int* ptr; // Wild pointer.
    // *ptr = 20; // Error.

    int* ptr2 = NULL; // NULL pointer.

    int* ptr3;
    if(number>5){
        int number_2 = 20;
        ptr3 = &number_2; // Dangling pointer.
    }
    printf("%d\n",*ptr3); // no Error (pointing to a deleted variable (popped variable)).
    
    int number_3 = 20;
    void* ptr4 = &number_3;
    // ptr4++; // Error (no datatype set).
    printf("%d\n",*(int*)ptr4);

    int number_4=10;
    int* ptr5 = &number_4;
    int** ptr6 = &ptr5; // pointer to pointer.
    printf("&number_4 = %d\n",ptr5);
    printf("&number_4 = %d\n",*ptr6);
    printf("&number_4 = %d\n",&number_4);
    printf("number_4 = %d\n",number_4);
    printf("&number_4 = %d\n",*ptr5);
    printf("number_4 = %d\n",**ptr6);
    printf("&ptr5 = %d\n",ptr6);
    printf("ptr6 = &ptr5 %d\n",&ptr5);
    printf("&ptr6 = %d\n",&ptr6);

    int number_6 = 0x44332211;
    char* ptr7 = &number_6;
    printf("%x\n",*(ptr7+1)); // can be overide by decalaring variables in the stack.
    printf("%x\n",ptr7[1]);
    return 0;
}
