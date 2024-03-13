#include<stdio.h>
#include<stdlib.h>
#include "func.h"

struct BIT{
    int num_1 : 3;
    int num_2 : 2;
    int num_3 : 4;
};

int main(){
    struct BIT b1 = {7,1,2};
    printf("%d\n",b1.num_1);
    printf("%d\n",b1.num_2);
    printf("%d\n",b1.num_3);
    return 0;
}
