#include<stdio.h>
#include<stdlib.h>

void number_of_digits(int number_1){
    int counter=0,saved_number=number_1;
    while (number_1!=0)
    {
        counter++;
        number_1/=10;
    }
    printf("The number of digits in %d\tis %d .\n",saved_number,counter);
}
