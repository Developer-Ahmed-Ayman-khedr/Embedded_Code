#include<stdio.h>
#include<stdlib.h>
#include "func.h"

typedef struct Node{
    int value;
    struct Node* next;
}node;

int main(){
    node* ptr=(node*)malloc(1*sizeof(node));
    return 0;
}
