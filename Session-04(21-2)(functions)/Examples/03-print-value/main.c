#include<stdio.h>
#include<stdlib.h>

void fun(int number){
        printf("%d.\n",number);
}

int main(){
    int num;
    scanf("%d",&num);
    fun(6);
    fun(num);
    return 0;
}