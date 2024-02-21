#include<stdio.h>
#include<stdlib.h>

int fun(int num_1,int num_2){
    int sum=0;
    while (num_1<=num_2)
    {
        sum+=num_1;
        num_1++;
    }
    return sum;
}

int main(){
    int n_1,n_2;
    printf("Enter two numbers:\n");
    scanf("%d%d",&n_1,&n_2);
    int ret=fun(n_1,n_2);
    printf("%d",ret);
    return 0;
}