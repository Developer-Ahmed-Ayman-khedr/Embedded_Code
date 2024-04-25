#include<stdio.h>
#include<stdlib.h>

void fun(){
    static int number=1;
    number++;
    printf("%d\n",number);
}