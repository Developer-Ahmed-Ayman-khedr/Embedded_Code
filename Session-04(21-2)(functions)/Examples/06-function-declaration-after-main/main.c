#include<stdio.h>
#include<stdlib.h>

int fun(int num_1,int num_2);

int main(){
    int n_1,n_2;
    printf("Enter two numbers:\n");
    scanf("%d%d",&n_1,&n_2);
    int ret=fun(n_1,n_2);
    printf("%d",ret);
    return 0;
}

int fun(int num_1,int num_2){
    int iterations=num_1+num_2;
    return iterations;
}