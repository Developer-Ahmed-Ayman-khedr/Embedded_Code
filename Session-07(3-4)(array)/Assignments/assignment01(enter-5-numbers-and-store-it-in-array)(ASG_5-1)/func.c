#include<stdio.h>
#include<stdlib.h>

void bubble_sort(int* ptr){
    int temp = 0, i;
    for (i = 0; i < 5; i++)
    {
        for (int x = 0; x < 5-i-1; x++)
        {
            if (ptr[x]>ptr[x+1])
            {
                temp = ptr[x];
                ptr[x] = ptr[x+1];
                ptr[x+1] = temp;
            }
        }
    }
}

void search_max(int* ptr){
    int maxx = ptr[0], counter = 0, i;
    for (i = 1; i < 5; i++)
    {
        if (ptr[i]>maxx)
        {
            maxx = ptr[i];
            counter = i;
        }
    }
    printf("\nThe maximum number is %d in position %d \n",maxx,counter);
}

void search_min(int* ptr){
    int mini = ptr[0], counter = 0, i;
    for (i = 1; i < 5; i++)
    {
        if (ptr[i]<mini)
        {
            mini = ptr[i];
            counter = i;
        }
    }
    printf("The minimum number is %d in position %d \n",mini,counter);
}
