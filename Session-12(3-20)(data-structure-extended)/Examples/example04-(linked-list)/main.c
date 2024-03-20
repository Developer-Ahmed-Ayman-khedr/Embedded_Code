#include<stdio.h>
#include<stdlib.h>
#include "func.h"

typedef struct Node{
    int value;
    struct Node* next;
}node;

int main(){
    node* one=(node*)malloc(1*sizeof(node));
    node* two=(node*)malloc(1*sizeof(node));
    node* three=(node*)malloc(1*sizeof(node));
    one->value = 10;
    one->next = two;
    two->value = 20;
    two->next = three;
    three->value = 30;
    printf("%d\n",one->value);
    printf("%d\n",one->next->value);
    printf("%d\n",one->next->next->value);
    return 0;
}
