#include<stdio.h>
#include<stdlib.h>
int main(){
    int degree;
    printf("Please enter your degree:\n");
    scanf("%d",&degree);
    if (degree>=85 && degree<=100)
    {
        printf("A\n");
    }
    else if (degree>=75 && degree<=84)
    {
        printf("B\n");
    }
    else if (degree>=65 && degree<=74)
    {
        printf("C\n");
    }
    else if (degree>=50 && degree<=64)
    {
        printf("D\n");
    }
    else if (degree>=0 && degree<=49)
    {
        printf("F\n");
    }
    else
    {
        printf("Error.\n");
    }
    return 0;
}