#include<stdio.h>
#include<stdlib.h>

#include"SDB.c"

void SDB_action (uint8 choice){
    uint32 id;
    switch (choice)
    {
    case 0:
        break;
    case 1:
        SDB_AddEntry();
        break;
    case 2:
        uint32 result=SDB_GetUsedSize();
        printf("The used size in the database: %d",result);
        break;
    case 3:
        printf("Enter student id:\n");
        scanf("%d",&id);
        SDB_ReadEntry(id);
        break;
    case 4:
        uint32 l1[10];
        uint8 count,i;
        SDB_GetList(&count, l1);
        for ( i = 0; i < count; i++)
        {
            printf("ID%d: %d\n",i,l1[i]);
        }
        break;
    case 5:
        printf("Enter student id:\n");
        scanf("%d",&id);
        SDB_IsIdExist(id);
        break;
    case 6:
        printf("Enter student id:\n");
        scanf("%d",&id);
        SDB_DeletEntry(id);
        break;
    case 7:
        BOOL res =SDB_IsFull();
        if (res)
        {
            printf("The database is full.\n");
        }
        else
        {
            printf("The database is not full.\n");
        }
        break;
    default:
        printf("Wrong choice.\n");
        break;
    }
    return;
}

void SDB_APP (){
    uint8 choise = 1;
    do
    {
        printf("To add entry, enter 1\n");
        printf("To get used size in database, enter 2\n");
        printf("To read student data, enter 3\n");
        printf("To get the list of all student IDs, enter 4\n");
        printf("To check if ID exists, enter 5\n");
        printf("To delete student data, enter 6\n");
        printf("To check if database is full, enter 7\n");
        printf("To exit enter 0\n");
        scanf("%d",&choise);
        SDB_action(choise);
    } while (choise != 0);
    return;
}