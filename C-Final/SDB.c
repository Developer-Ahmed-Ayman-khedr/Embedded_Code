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

BOOL SDB_IsIdExist (uint32 id){
    printf("5\n");
    int result = BINARY_SEARSH(id);
    if (result>=0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

BOOL SDB_AddEntry(){
    printf("1\n");
    BOOL result= SDB_IsFull();
    if (result)
    {
        printf("The database is full.\n");
        return FALSE;
    }
    uint8 i;
    uint32 size=sizeof(s);
    for ( i = 0; i < size; i++)
    {
        if (s[i].Used==FALSE)
        {
            printf("Enter student ID:\n");
            scanf("%d",&s[i].Student_ID);
            printf("Enter student year:\n");
            scanf("%d",&s[i].Student_year);
            printf("Enter course 1 ID :\n");
            scanf("%d",&s[i].Course1_ID);
            printf("Enter course 1 grade :\n");
            scanf("%d",&s[i].Course1_grade);
            printf("Enter course 2 ID :\n");
            scanf("%d",&s[i].Course2_ID);
            printf("Enter course 2 grade :\n");
            scanf("%d",&s[i].Course2_grade);
            printf("Enter course 3 ID :\n");
            scanf("%d",&s[i].Course3_ID);
            printf("Enter course 3 grade :\n");
            scanf("%d",&s[i].Course3_grade);
            s[i].Used=TRUE;
            BUBBLE_SORT();
            return TRUE;
        }
    }
    return FALSE;
}

void SDB_DeletEntry (uint32 id){
    printf("6\n");
    if (SDB_IsIdExist(id))
    {
        int result = BINARY_SEARSH(id);
        s[result].Used=FALSE;
    }
    BUBBLE_SORT();
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

void SDB_GetList (uint8 * count, uint32 * list){
    if (s[0].Used==FALSE)
    {
        printf("The data base is embty.\n");
        return;
    }
    uint8 i, size=SDB_GetUsedSize();
    for ( i = 0; i <= size; i++)
    {
        list[i]=s[i].Student_ID;
    }
    *count=size;
    return;
}
