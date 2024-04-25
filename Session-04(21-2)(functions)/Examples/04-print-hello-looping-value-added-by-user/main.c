#include<stdio.h>
#include<stdlib.h>

void fun(int iterations){
    for (int i = 0; i < iterations; i++)
    {
        printf("Hello.\n");
    }
}

int main(){
    int ite;
    printf("Enter number of iterations:\n");
    scanf("%d",&ite);
    fun(ite);
    return 0;
}