#include<stdio.h>
#include<stdlib.h>
#include "func.h"

struct student
{
    char name[20] ;
    int age;
    int id;
};

int main(){
    struct student s[3]={{"Ahmed",22,1}};
    printf("%s\n",s[0].name);
    printf("%s\n",s[1].name);
    printf("%s\n",s[2].name);
    return 0;
}
