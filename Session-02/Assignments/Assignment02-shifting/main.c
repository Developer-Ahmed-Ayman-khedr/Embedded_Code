#include<stdio.h>
#include<stdlib.h>
int main(){
    int shi, number;
    printf("Please enter the digit you want to shift:\n");
    scanf("%d",&shi);
    printf("Please enter the number to shift:\n");
    scanf("%d",&number);
    int result = number | (1<<shi);
    printf("The number after shifting = \n%d",result);
    return 0;
}