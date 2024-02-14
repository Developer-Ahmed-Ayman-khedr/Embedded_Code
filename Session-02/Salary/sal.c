#include<stdio.h>
#include<stdlib.h>
int main (){
    int rate;
    int hours;
    printf("Please enter the rate.\n");
    scanf("%d",&rate);
    printf("Please enter the hours.\n");
    scanf("%d",&hours);
    int total_salary=rate*hours;
    printf("The salary = %d",total_salary);
    return 0;
}