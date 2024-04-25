#include<stdio.h>
#include<stdlib.h>
#include"mymath.h"

int main(){
    int n_1,n_2;
    printf("Enter two numbers:\n");
    scanf("%d%d",&n_1,&n_2);
    int ret=fun(n_1,n_2);
    printf("%d",ret);
    return 0;
}
