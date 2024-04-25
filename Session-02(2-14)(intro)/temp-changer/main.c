#include<stdio.h>
#include<stdlib.h>
int main(){
    float temp_in_cel;
    printf("Please enter the temp in C:\n");
    scanf("%f",&temp_in_cel);
    float temp_in_feh=temp_in_cel*9/5+32;
    printf("The temp <%f> = %f",temp_in_cel,temp_in_feh);
    return 0;
}