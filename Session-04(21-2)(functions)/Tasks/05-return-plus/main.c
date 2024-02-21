#include<stdio.h>
#include<stdlib.h>

int fun(int num_1,int num_2){
    int iterations=num_1+num_2;
    return iterations;
}

int main(){
    int n_1=10,n_2=20;
    int ret=fun(n_1,n_2);
    printf("%d",ret);
    return 0;
}