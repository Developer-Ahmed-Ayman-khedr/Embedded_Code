#include<stdio.h>
#include<stdlib.h>
#include "func.h"

int main(){
    int arr[4] = {10,20,30,40}, number, flage=0;;
    printf("Enter number to search for:\n");
    scanf("%d",&number);
    int i;
    for (i = 0; i < 4; i++)
    {
        if (arr[i]==number)
        {
            printf("The number %d has been found at %d\n",number,i+1);
            flage=1;
            break;
        }
    }
    if (flage==0)
    {
        printf("The number has not been found.\n");
    }
    return 0;
}
