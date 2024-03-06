#include<stdio.h>
#include<stdlib.h>
#include "func.h"

struct student
{
    char name[20] ;
    int age;
    int id;
};

void fun(struct student ss){
    if (ss.id>0)
    {
        printf("ok.\n");
    }
    else
    {
        printf("Error,\n");
    }
    return;
}


int main(){
    struct student s1={"Ahmed",22,1};
    fun(s1);
    return 0;
}
