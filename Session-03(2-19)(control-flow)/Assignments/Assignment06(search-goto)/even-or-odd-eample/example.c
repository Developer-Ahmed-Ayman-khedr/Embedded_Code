#include<stdio.h>
#include<stdlib.h>
int main(){
    int number;
    printf("Enter a number to check:\n");
    scanf("%d",&number);
    if (number%2==0)
    {
        goto even;
    }
    else
    {
        goto odd;
    }
    even:
        printf("Even.\n");
        return 0;
    
    odd:
        printf("Odd.\n");
        return 0 ;   
    return 0;
}