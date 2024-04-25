#include<stdio.h>
#include<stdlib.h>
int main(){
    int days_to_get_from_user;
    printf("Please enter the days:\n");
    scanf("%d",&days_to_get_from_user);
    int years=days_to_get_from_user/365;
    int weeks=((days_to_get_from_user%365)/7);
    int days_to_print=(days_to_get_from_user%365)%7;
    printf("The number you entered : %d\n\n",days_to_get_from_user);
    printf("The number of years : %d\n",years);
    printf("The number of weeks : %d\n",weeks);
    printf("The number of days : %d\n",days_to_print);    
    return 0;
}