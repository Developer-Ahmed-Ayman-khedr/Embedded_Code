#include<stdio.h>
#include<stdlib.h>

#include"SDB.h"

void BUBBLE_SORT(){
    uint8 i,k;
    uint32 size=sizeof(s);
    student temp={0};
    for ( i = 0; i < size; i++)
    {
        for ( k = 0; k < size-i-1; k++)
        {
            if (s[k].Student_ID>s[k+1].Student_ID)
            {
                temp=s[k];
                s[k]=s[k+1];
                s[k+1]=temp;
            }
        }
    }
    return;
}

uint8 BINARY_SEARSH(uint32 id){
    uint8 start=0,mid;
    uint32 end=sizeof(s);
    while (start<=end)
    {
        mid=(start+end)/2;
        if (s[mid].Student_ID==id)
        {
            return mid;
        }
        else if (s[mid].Student_ID<=id)
        {
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }
    }
    return -1;
}

BOOL SDB_IsFull (){
    if (s[10].Used==TRUE)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

uint8 SDB_GetUsedSize(){
    uint8 result=0, i;
    uint32 size=sizeof(s);
    for ( i = 0; i < size; i++)
    {
        if (s[i].Used==TRUE)
        {
            result++;
        }
        else
        {
            break;
        }
    }
    return result;
}
//search for an id.
BOOL SDB_IsIdExist (uint32 id){
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

//add node end.
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
    if (Head==NULL)
    {
        newnode->next = Head;
        Head = newnode;
        return;
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

//dellete node end.
void SDB_DeletEntry (uint32 id){
    node* prev = Head;
    node* current = Head->next;
    while (prev->Student_ID!=id)
    {
        prev=prev->next;
    }
    current=prev->next;
    if (current->Student_ID==id)
    {
        prev->next=current->next;
        free(current);
        return;
    }
    printf("Not found.\n");
    return;
    return;
}

BOOL SDB_ReadEntry (uint32 id){
    printf("3\n");
    int result = BINARY_SEARSH(id);
    if (result>=0)
    {
        printf("Student ID: %d\n",s[result].Student_ID);
        printf("Student year: %d\n",s[result].Student_year);
        printf("Course 1 id: %d\n",s[result].Course1_ID);
        printf("Course 1 grade: %d\n",s[result].Course1_grade);
        printf("Course 2 id: %d\n",s[result].Course2_ID);
        printf("Course 2 grade: %d\n",s[result].Course2_grade);
        printf("Course 3 id: %d\n",s[result].Course3_ID);
        printf("Course 3 grade: %d\n",s[result].Course3_grade);
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

//get linked ist.
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
