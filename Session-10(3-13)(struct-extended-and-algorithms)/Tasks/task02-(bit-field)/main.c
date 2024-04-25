#include<stdio.h>
#include<stdlib.h>
#include "func.h"

struct BIT_DATE{
    unsigned int day : 5;
    unsigned int month : 4;
    unsigned int year : 12;
};

int main(){
    struct BIT_DATE b1 = {13,3,2048};
    printf("%d/%d/%d\n",b1.day,b1.month,b1.year);
    return 0;
}
