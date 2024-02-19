#include<stdio.h>
#include<stdlib.h>
int main(){
    int number;
    printf("Please enter number of hellos to print:\n");
    scanf("%d",&number);
    do
    {
        printf("Hello.\n");
        number--;
    }while(number>=1);
    printf("Final.\n");
    return 0;
}