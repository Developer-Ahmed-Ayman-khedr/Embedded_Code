#include<stdio.h>
#include<stdlib.h>
#include "func.h"

int stack[10],Top=-1;

int is_empty(){
    if (Top==-1)
    {
        return 0;
    }
    return 1;
}
int is_full(){
    if (Top==sizeof(stack))
    {
        return 1;
    }
    return 0;
}
void push(int num){
    if (is_full())
    {
        printf("The stack if full.\n");
        return;
    }
    Top++;
    stack[Top]=num;
    return;
}

void pop(){
    if (is_empty()==1)
    {
        Top--;
        return;
    }
    printf("The stack is impty.\n");
    return;
}

void display_stack(){
    if (is_empty()==1)
    {
        for (int i = Top; i >=0; i--)
        {
            printf("%d\n",stack[i]);
        }
        return;
    }
    printf("The stack is impty.\n");
    return;
}

int main(){
    push(10);
    push(20);
    push(30);
    display_stack();
    pop();
    pop();
    display_stack();
    return 0;
}
