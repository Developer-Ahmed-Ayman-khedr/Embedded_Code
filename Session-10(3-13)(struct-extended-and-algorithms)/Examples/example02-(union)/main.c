#include<stdio.h>
#include<stdlib.h>
#include "func.h"

union un{
    unsigned char ch_1 ;
    unsigned int num_1 ;
};

int main(){
    union un b1;
    b1.num_1 = 511;
    printf("%d\n",b1.num_1);
    printf("%d\n",b1.ch_1);
    b1.ch_1 = 0;
    printf("%d\n",b1.num_1);
    printf("%d\n",b1.ch_1);
    return 0;
}
