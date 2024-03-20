#include<stdio.h>
#include<stdlib.h>
#include "func.h"

int main(){
    int size,i;
    scanf("%d",&size);
    int* ptr= (int*)malloc(size*sizeof(int));
    printf("Enter %d elements:\n",size);
    for ( i = 0; i < size; i++)
    {
        scanf("%d",&ptr[i]);
    }
    printf("\n");
    for ( i = 0; i < size; i++)
    {
        printf("%d ",ptr[i]);
    }
    return 0;
}
