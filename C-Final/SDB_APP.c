#include<stdio.h>
#include<stdlib.h>

#include"SDB.c"

//add an entry to the linked list(the database).
void add_entry(){
    uint32 s_id, s_year, c_1_id, c_1_grade, c_2_id, c_2_grade, c_3_id, c_3_grade;
    printf("Enter student ID:\n");
    scanf("%d",&s_id);
    printf("Enter student year:\n");
    scanf("%d",&s_year);
    printf("Enter course 1 ID :\n");
    scanf("%d",&c_1_id);
    printf("Enter course 1 grade :\n");
    scanf("%d",&c_1_grade);
    printf("Enter course 2 ID :\n");
    scanf("%d",&c_2_id);
    printf("Enter course 2 grade :\n");
    scanf("%d",&c_2_grade);
    printf("Enter course 3 ID :\n");
    scanf("%d",&c_3_id);
    printf("Enter course 3 grade :\n");
    scanf("%d",&c_3_grade);
    SDB_AddEntry(s_id, s_year, c_1_id, c_1_grade, c_2_id, c_2_grade, c_3_id, c_3_grade);
}

//Do the actions the user entered.
void SDB_action (uint8 choice){
    uint32 id;
    switch (choice)
    {
    case 0:
        break;
    case 1:
        add_entry();
        break;
    case 2:
        uint32 result=SDB_GetUsedSize();
        printf("The used size in the database: %d.\n",result);
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
            printf("ID %d: %d.\n",i,l1[i]);
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
    default:
        printf("Wrong choice.\n");
        break;
    }
    return;
}

//Display the options for the user.
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
        printf("To exit enter 0\n");
        scanf("%d",&choise);
        SDB_action(choise);
    } while (choise != 0);
    return;
}