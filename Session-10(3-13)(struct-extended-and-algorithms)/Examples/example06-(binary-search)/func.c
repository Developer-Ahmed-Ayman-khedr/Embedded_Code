#include<stdio.h>
#include<stdlib.h>

int binary_search(int* arrptr,int end, int find){
    int start=0, mid=0;
    while (end>=start)
    {
        mid=(start+end)/2;
        if (find>arrptr[mid])
        {
            
            start=mid+1;
            
        }
        else if (find<arrptr[mid])
        {
            end=mid-1;
        }
        else
        {
            return mid;
        }
    }
    return -1;
}