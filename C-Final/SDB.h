#include<stdio.h>
#include<stdlib.h>

#include"STD.h"

//Declaring the structure.
typedef struct Node
{
    uint32 Student_ID;
    uint32 Student_year;
    uint32 Course1_ID;
    uint32 Course1_grade;
    uint32 Course2_ID;
    uint32 Course2_grade;
    uint32 Course3_ID;
    uint32 Course3_grade;
    BOOL Used;
    struct Node* next;
} node;

//Declaring the first node in the linked list,
node* Head = NULL;