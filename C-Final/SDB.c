#include<stdio.h>
#include<stdlib.h>

#include"SDB.h"

//Check if linked list is embty: if true return TRUE and if false return FALSE.
BOOL SDB_IsEmbty (){
    if (Head==NULL)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

//Return the size of the linked list.
uint8 SDB_GetUsedSize(){
    uint32 i=0;
    if (SDB_IsEmbty())
    {
        printf("The database is embty.\n");
        return 0;
    }
    node* current=Head;
    while (current!=NULL)
    {
        i++;
        current=current->next;
    }
    return i;
}

//Search for an id in the linked list.
BOOL SDB_IsIdExist (uint32 id){
    if (SDB_IsEmbty())
    {
        printf("The database is embty.\n");
        return FALSE;
    }
    node* current = Head;
    uint32 counter=0;
    current = Head;
    while (current->next!=NULL && current->Student_ID!=id)
    {
        current=current->next;
        counter++;
    }
    if (current->Student_ID!=id)
    {
        printf("Not found.\n");
        return FALSE;
    }
    printf("%d found at: %d",current->Student_ID,counter);
    printf("\n");
    return TRUE;
}

//Add a node to the linked list.
BOOL SDB_AddEntry(uint32 s_id,uint32 s_year,uint32 c_1_id,uint32 c_1_grade,uint32 c_2_id,uint32 c_2_grade,uint32 c_3_id,uint32 c_3_grade){
    node* newnode = (node*)malloc(1*sizeof(node));
    newnode->Student_ID = s_id;
    newnode->Student_year = s_year;
    newnode->Course1_ID = c_1_id;
    newnode->Course1_grade = c_1_grade;
    newnode->Course2_ID = c_2_id;
    newnode->Course2_grade = c_2_grade;
    newnode->Course3_ID = c_3_id;
    newnode->Course3_grade = c_3_grade;
    newnode->Used = TRUE;
    if (SDB_IsEmbty())
    {
        newnode->next = Head;
        Head = newnode;
        return TRUE;
    }
    node* current=Head;
    while (current->next!=NULL)
    {
        current=current->next;
    }
    current->next=newnode;
    newnode->next=NULL;
    if (!newnode->Used)
    {
        return FALSE;
    }
    return TRUE;
}

//Delete a node from the linked list.
void SDB_DeletEntry (uint32 id){
    if (SDB_IsEmbty())
    {
        printf("The database is embty.\n");
        return;
    }
    node* current;
    current = Head;
    if (current->Student_ID==id)
    {
        Head=current->next;
        free(current);
        return;
    }
    current = current->next;
    node* prev = Head;
    while (current->Student_ID!=id)
    {
        current = current->next;
        prev = prev->next;
    }
    if (current->Student_ID==id)
    {
        prev->next = current->next;
        free(current);
        return;
    }
    printf("Not found.\n");
    return;
    
}

//Search and print node using the studint's id.
BOOL SDB_ReadEntry (uint32 id){
    if (SDB_IsEmbty())
    {
        printf("The database is embty.\n");
        return FALSE;
    }
    node* current = Head;
    uint32 counter=0;
    current = Head;
    while (current->next!=NULL && current->Student_ID!=id)
    {
        current=current->next;
        counter++;
    }
    if (current->Student_ID!=id)
    {
        printf("Not found.\n");
        return FALSE;
    }
    printf("Student ID: %d.\n",current->Student_ID);
    printf("Student year: %d.\n",current->Student_year);
    printf("Course 1 id: %d.\n",current->Course1_ID);
    printf("Course 1 grade: %d.\n",current->Course1_grade);
    printf("Course 2 id: %d.\n",current->Course2_ID);
    printf("Course 2 grade: %d.\n",current->Course2_grade);
    printf("Course 3 id: %d.\n",current->Course3_ID);
    printf("Course 3 grade: %d.\n",current->Course3_grade);
    return TRUE;
}

//Save the student's id in every node in an array and print it in the file SDB_APP.c.
void SDB_GetList (uint8 * count, uint32 * list){
    if (Head==NULL)
    {
        printf("The data base is embty.\n");
        return;
    }
    node* current=Head;
    uint32 i=0;
    while (current!=NULL)
    {
        list[i]=current->Student_ID;
        current=current->next;
        i++;
    }
    *count=i;
    return;
}
