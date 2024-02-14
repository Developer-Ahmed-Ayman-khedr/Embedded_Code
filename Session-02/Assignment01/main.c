#include<stdio.h>
#include<stdlib.h>
int main (){
    char ch='%';
    int number_1, number_2;
    int pl,mi,mu;
    printf("Please enter the first number:\n");
    scanf("%d",&number_1);
    printf("Please enter the second number:\n");
    scanf("%d",&number_2);
    pl=number_1+number_2;
    mi=number_1-number_2;
    mu=number_1%number_2;
    printf("%d + %d = %d .\n%d - %d = %d .\n",number_1,number_2,pl,number_1,number_2,mi);
    printf("%d ",number_1);printf("%c",ch);printf(" %d = %d .\n",number_2,mu);
    printf("%d %% %d = %d .\n",number_1,number_2,mu);
    return 0;
}