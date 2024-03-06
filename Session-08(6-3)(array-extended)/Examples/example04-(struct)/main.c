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
    printf("%d",s1.age);
    return 0;
}
