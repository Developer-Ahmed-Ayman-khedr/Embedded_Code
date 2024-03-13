#include<stdio.h>
#include<stdlib.h>

void fun(){
    printf("Hello.\n");
}

int main(){
    printf("1.\n");
    fun();
    printf("2.\n");
    fun();
    fun();
    printf("3.\n");
    fun();
    fun();
    fun();
    return 0;
}