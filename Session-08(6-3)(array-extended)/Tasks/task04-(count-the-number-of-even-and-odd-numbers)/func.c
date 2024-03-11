#include<stdio.h>
#include<stdlib.h>

void fun(int* arrptr){
    int i, even = 0, odd = 0;
    for ( i = 0; i < 5; i++)
    {
        if (arrptr[i]%2==0)
        {
            even++;
        }
        if (arrptr[i]%2==1)
        {
            odd++;
        }
    }
    printf("Even Numbers: %d\n",even);
    printf("Odd Numbers: %d\n",odd);
}
