#include<stdio.h>
#include<stdlib.h>
#include "func.h"

typedef struct Node{
    int value;
    struct Node* next;
}node;

node* head = NULL;

void addnodestart(int num){
    node* newnode = (node*)malloc(1*sizeof(node));
    newnode->value = num;
    newnode->next = head;
    head = newnode;
}

void addnodesend(int num){
    if (head==NULL)
    {
        addnodestart(num);
        return;
    }
    node* newnode = (node*)malloc(1*sizeof(node));
    newnode->value = num;
    node* current=head;
    while (current->next!=NULL)
    {
        current=current->next;
    }
    current->next=newnode;
    newnode->next=NULL;
}

void printlinkedlist(){
    node* current = head;
    current=head;
    while (current!=NULL)
    {
        printf("%d ",current->value);
        current=current->next;
    }
    printf("\n");
    return;
}

void searchlinkedlist(int ser){
    node* current = head;
    current=head;
    while (current->next!=NULL && current->value!=ser)
    {
        current=current->next;
    }
    if (current->value!=ser)
    {
        printf("Not found.\n");
        return;
    }
    printf("%d ",current->value);
    printf("\n");
    return;
}

void delletenode(int dell){
    node* prev = head;
    node* current = head->next;
    while (prev->next->value!=dell)
    {
        prev=prev->next;
    }
    current=prev->next;
    if (current->value==dell)
    {
        prev->next=current->next;
        free(current);
        return;
    }
    printf("Not found.\n");
    return;
}

int main(){
    addnodestart(30);
    addnodestart(20);
    addnodestart(10);
    printlinkedlist();
    
    addnodesend(40);
    addnodesend(50);
    addnodesend(60);
    printlinkedlist();
    searchlinkedlist(70);
    return 0;
}
