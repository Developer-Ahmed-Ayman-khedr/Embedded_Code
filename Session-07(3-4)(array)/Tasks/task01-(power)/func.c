#include<stdio.h>
#include<stdlib.h>

void fun(int number, int power, int* retu){
    while(power >= 1){
        *retu = (*retu)*number;
        power--;
    }
}
