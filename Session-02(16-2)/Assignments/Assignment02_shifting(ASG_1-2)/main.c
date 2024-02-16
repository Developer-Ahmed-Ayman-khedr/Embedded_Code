#include<stdio.h>
#include<stdlib.h>
int main(){
    int shi, number;
    printf("Please enter any number: ");
    scanf("%d",&number);
    printf("Please enter nth digit to toggle (0-31): ");
    scanf("%d",&shi);
    int result = number | (1<<shi);
    printf("Bit toggled successfuly.\n\n");
    printf("The number before toggling %d bit : %d (in decimal)\n",shi,number);
    printf("The number after toggling %d bit : %d (in decimal)\n",shi,result);
    return 0;
}