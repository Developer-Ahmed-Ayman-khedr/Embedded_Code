#include<stdio.h>
#include<stdlib.h>

void fun();

int main(){
    printf("1.\n");
    fun();
    printf("2.\n");
    fun();
    fun();
    return 0;
}

void fun(){
    printf("Hello.\n");
}