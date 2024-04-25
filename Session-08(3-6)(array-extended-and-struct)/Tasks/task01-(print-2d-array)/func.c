#include<stdio.h>
#include<stdlib.h>

void fun(int ptr[][3]){
    int i,j;
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("%d\t",ptr[i][j]);
        }
        printf("\n");
    }
}
