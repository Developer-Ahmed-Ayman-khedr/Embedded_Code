#include<stdio.h>
#include<stdlib.h>
int main(){
    char operator;
    int Number_1,Number_2;
    printf("Enter the operator\n");
    scanf("%c",&operator);
    printf("Enter Number_1\n");
    scanf("%d",&Number_1);
    printf("Enter Number_1\n");
    scanf("%d",&Number_2);
    switch (operator)
    {
    case '+':
        printf("The result = %d\n",Number_1+Number_2);
        break;
    
    case '-':
        printf("The result = %d\n",Number_1-Number_2);
        break;
    
    case '*':
        printf("The result = %d\n",Number_1*Number_2);
        break;
    
    case '/':
        printf("The result = %d\n",Number_1/Number_2);
        break;
    default:
        printf("Error.\n");
        break;
    }
    return 0;
}