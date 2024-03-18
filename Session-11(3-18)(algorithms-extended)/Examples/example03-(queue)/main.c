#include<stdio.h>
#include<stdlib.h>
#include "func.h"

int arr[10],first=-1,end=-1;

void enqueue(int num){
    if (first==-1&&end==-1)
    {
        first=0;
        end=0;
        arr[end]=num;
    }
    else
    {
        end++;
        arr[end]=num;
    }
    return;
}

void dequeue(){
    if (first==-1&&end==-1)
    {
        printf("The queue is empty.\n");
        return;
    }
    else if (first>end)
    {
        first=-1;
        end=-1;
        printf("The queue has been embtied.\n");
        return;
    }
    first++;
}
void printqueue(){
    if (first==-1&&end==-1)
    {
        printf("The queue is empty.\n");
        return;
    }
    int i;
    for ( i = first; i <= end; i++)
    {
        printf("%d, ",arr[i]);
    }
    printf("\n");
    return;
}
int main(){
    enqueue(1);   
    enqueue(2);   
    enqueue(3);   
    enqueue(4);   
    enqueue(5);
    printqueue();
    int i;
    for ( i = 0; i < 3; i++)
    {
        dequeue();
        printqueue();
    }
    return 0;
}
