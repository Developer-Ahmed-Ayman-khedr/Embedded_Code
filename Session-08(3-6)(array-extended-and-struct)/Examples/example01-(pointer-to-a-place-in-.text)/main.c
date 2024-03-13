#include<stdio.h>
#include<stdlib.h>
#include "func.h"

int main(){
    char str[7] = "josepf";
    str[0] = 'x';
    printf("%s\n",str);
    scanf("%s",str);
    printf("%s\n",str);
    //str = "Ahmed"; // str is an address not a variable.
    char* ptr = "AMIT";
    printf("%s\n",ptr);
    //ptr[0] = 'x'; // the pointer ptr is saved in the .text file which includes the code.
    ptr = "Ahmed";
    printf("%s\n",ptr);
    return 0;
}
