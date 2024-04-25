#include<stdio.h>
#include<stdlib.h>

int fun(int num){
    int iterations=num+1;
    return iterations;
}

int main(){
    int ite=10;
    int ret=fun(ite);
    printf("%d",ret);
    return 0;
}