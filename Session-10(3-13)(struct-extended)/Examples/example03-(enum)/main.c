#include<stdio.h>
#include<stdlib.h>
#include "func.h"

enum BOOL{
    TRUE = 1,FALSE = 0
};

enum DAY{
    SUN,MON,TUE,WED,THU,FRi,SAT
};

enum BOOL functio(){
    if (1)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

void funct(enum BOOL b){
    if (b)
    {
        printf("True\n");
    }
    else
    {
        printf("False\n");
    }
}

int main(){
    enum BOOL b1;
    b1 = TRUE;
    printf("%d\n",b1);
    enum DAY D1 = THU;
    printf("%d\n",D1);
    funct(b1);
    return 0;
}
