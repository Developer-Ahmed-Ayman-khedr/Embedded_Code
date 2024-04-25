#include<stdio.h>
#include<stdlib.h>
int main(){
    int number;
    printf("Please enter the number to get its multplication table:\n");
    scanf("%d",&number);
    for (int i = 1; i < 12; i++)
    {
        printf("%d * %d = %d .\n",number,i,number*i);
    }
    return 0;
}