#include<stdio.h>
#include<stdlib.h>
int main(){
    int saved_number,counter=0,number, remainder_of_modu,total=0,total_of_each_digit=1;
    printf("enter the number = ");
    scanf("%d",&saved_number);
    number=saved_number;
    while (number!=0)
    {
        counter++;
        number/=10;
    }
    number=saved_number;
    for (int i = 0; i < counter; i++)
    {
        remainder_of_modu=number%10;
        for (int x = 0; x < counter; x++)
        {
            total_of_each_digit*=remainder_of_modu;
        }
        total+=total_of_each_digit;
        total_of_each_digit=1;
        number/=10;
    }
    printf("The total= %d\n",total);
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