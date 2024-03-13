#include<stdio.h>
#include<stdlib.h>
#include "func.h"

struct student
{
    char name[10];
    int age;
    int id;
};

void func(struct student* s){
    if(s->id == 1)
    {
        printf("Hello.\n");
    }
}

int main(){
    struct student s1 = {"Ahmed",22,1};
    func(&s1);
    return 0;
}
