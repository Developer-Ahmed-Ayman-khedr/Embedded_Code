#include<stdio.h>
#include<stdlib.h>


void fibonacci(int numb){
    static int numb_1=0,numb_2=1,numb_3;
    if(numb>0)
    {
        numb_3 = numb_1 + numb_2;    
        numb_1 = numb_2;    
        numb_2 = numb_3;    
        printf("%d, ",numb_3);    
        fibonacci(numb-1);
    }
}
