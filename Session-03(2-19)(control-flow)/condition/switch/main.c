#include<stdio.h>
#include<stdlib.h>
int main(){
    int number=1;
    switch(number)
    {
        case 1:
            printf("1\n");
            break;
        case 2:
            printf("2\n");
            break;
        case 3:
            printf("3\n");
            break;
        default:
            printf("Error.\n");
            break;
    }
    return 0;
}