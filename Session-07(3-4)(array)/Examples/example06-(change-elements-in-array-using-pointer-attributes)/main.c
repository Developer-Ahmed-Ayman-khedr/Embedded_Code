#include<stdio.h>
#include<stdlib.h>
#include "func.h"

int main(){
    int arr[4] = {10,20,30,40};
    printf("%d\n",arr[0]);
    *(arr) = 100;
    printf("%d\n",arr[0]);
    *(arr+1) = 200;
    printf("%d %d\n",arr[0],arr[1]);
    *(arr+2) = 300;
    printf("%d %d %d\n",arr[0],arr[1],arr[2]);
    // The arr is not a variable it is an address
    //arr = arr+1;
    //arr = 100;
    //arr++;
    return 0;
}
