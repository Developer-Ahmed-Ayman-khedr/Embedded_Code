#include<stdio.h>
#include<stdlib.h>
#include "func.h"

typedef struct student{
    char name[10];
    int age;
}std;

int main(){
    struct student s1 = {"Ahmed", 22};
    std s2 = {"Abdo", 28};
    printf("%s\n",s1.name);
    printf("%s\n",s2.name);
    return 0;
}
