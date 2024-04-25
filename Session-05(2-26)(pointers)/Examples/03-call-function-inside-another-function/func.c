#include<stdio.h>
#include<stdlib.h>

const int x=0;

void func2(){
    printf("22222\n");
}

void func1(){
    printf("11111\n");
    func2();
    printf("33333\n");
}