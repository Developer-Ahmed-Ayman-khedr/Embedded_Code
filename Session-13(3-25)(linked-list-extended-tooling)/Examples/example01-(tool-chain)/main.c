#include<stdio.h>
#include<stdlib.h>

#define NUM 5

#define ADD(NUM_1,NUM_2) NUM_1+NUM_2 //macro.


int main(){
    int result = ADD(1,2);
    int i;
    for ( i = 0; i < NUM; i++)
    {
        printf("%d ",result);
    }
    #if NUM==5// preprocessor if statement to replace accoring to the condition.
        printf("Hello");
    #endif
    #if NUM==5
    printf("Hello-2");
    #elif NUM==6
    printf("Hello-3");
    #endif
    #ifdef NUM// to check if a #define has been made.
    printf("Hello-4");
    #endif
    #ifndef NUM// to check if a #define has not been made.
    printf("Hello-4");
    #endif
    return 0;
}