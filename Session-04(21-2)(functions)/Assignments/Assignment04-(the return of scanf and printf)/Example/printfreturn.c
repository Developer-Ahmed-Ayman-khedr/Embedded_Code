#include<stdio.h>
#include<stdlib.h>

void Printf_return(char st[],int n){
    printf("The value retruned by printf() is :%d",printf("%s",st));
    return;
}

void Scanf_return(char st[],int n){
    printf("The value retruned by scanf() is :%d",scanf("%s",st));
    return;
}