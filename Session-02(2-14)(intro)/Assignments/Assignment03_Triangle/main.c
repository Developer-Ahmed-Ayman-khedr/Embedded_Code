#include<stdio.h>
#include<stdlib.h>
int main(){
    int angle_1,angle_2,angle_3;
    printf("Please enter the first angle in the triangle:\n");
    scanf("%d",&angle_1);
    printf("Please enter the second angle in the triangle:\n");
    scanf("%d",&angle_2);
    angle_3=180-(angle_1+angle_2);
    printf("The third angle = %d\n",angle_3);
    return 0;
}