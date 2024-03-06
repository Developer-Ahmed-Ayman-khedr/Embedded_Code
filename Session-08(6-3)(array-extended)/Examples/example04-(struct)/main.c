#include<stdio.h>
#include<stdlib.h>
#include "func.h"

struct student{
    char name[10];
    int age;
    int id;
};

int main(){
    struct student s1 = {"Ahmed",22,1};
    printf("%s\n",s1.name);
    printf("%d\n",s1.age);
    printf("%d\n",s1.id);
    return 0;
}
