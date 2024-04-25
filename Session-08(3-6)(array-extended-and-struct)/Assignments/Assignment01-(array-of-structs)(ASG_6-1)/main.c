#include<stdio.h>
#include<stdlib.h>
#include "func.h"

struct student
{
    char name[10];
    int section, age,degree;
};

void fun(struct student* ss){
    int i;
    for ( i = 0; i < 5; i++)
    {
        printf("Student %d\n\n",i+1);
        printf("Name\t: %s\n",ss[i].name);
        printf("Age\t:%d\n",ss[i].age);
        printf("Degree\t:%d\n",ss[i].degree);
        printf("Section\t:%d\n",ss[i].section);
    }
}

int main(){
    struct student s[5]={{"Ahmed",2,15,88},{"Mahamed",1,20,90},{"Nour",3,22,97},{"Anas",5,19,70},{"Omar",6,22,99}};
    fun(s);
    return 0;
}
