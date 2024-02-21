#include<stdio.h>
#include<stdlib.h>
int main(){
    int saved_number,number, remainder_of_modu,total=0;
    printf("enter the number = ");
    scanf("%d",&saved_number);
    number=saved_number;
    while (number!=0)
    {
        remainder_of_modu=number%10;
        total+=(remainder_of_modu*remainder_of_modu*remainder_of_modu);
        number/=10;
    }
    if (total==saved_number)
    {
        printf("armstrong number \n");
    }
    else
    {
        printf("not armstrong number \n");
    }
    return 0;
}