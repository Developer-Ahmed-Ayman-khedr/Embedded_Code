#include<stdio.h>
#include<stdlib.h>

#include"SDB.h"

BOOL SDB_IsFull (){
    printf("7\n");
    return TRUE;
    return FALSE;
}

uint8 SDB_GetUsedSize(){
    printf("2\n");
    uint8 result;
    return result;
}

BOOL SDB_AddEntry(){
    printf("1\n");
    return TRUE;
    return FALSE;
}

void SDB_DeletEntry (uint32 id){
    printf("6\n");
    return;
}

BOOL SDB_ReadEntry (uint32 id){
    printf("3\n");
    return TRUE;
    return FALSE;
}

void SDB_GetList (uint8 * count, uint32 * list){
    return;
}

BOOL SDB_IsIdExist (uint32 id){
    printf("5\n");
    return TRUE;
    return FALSE;
}
