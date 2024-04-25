#include<stdio.h>
#include<stdlib.h>
int main(){
    int number_1,number_2,number_3;
    printf("Please enter three numbers:\n");
    scanf(" %d %d %d",&number_1,&number_2,&number_3);
    if (number_1>number_2)
    {
        if (number_1>number_3)
        {
            printf("The number %d > %d > %d \n",number_1,number_2,number_3);
        }
        else
        {
            printf("The number %d > %d > %d \n",number_3,number_1,number_2);
        }
    }
    else
    {
        if (number_2>number_3)
        {
            printf("The number %d > %d > %d \n",number_2,number_1,number_3);
        }
        else
        {
            printf("The number %d > %d > %d \n",number_3,number_1,number_2);            
        }
    }
    return 0;
}