#include<stdio.h>
#include<stdlib.h>

#include"STD.h"

typedef struct SimpleDb
{
    uint32 Student_ID;
    uint32 Student_year;
    uint32 Course1_ID;
    uint32 Course1_grade;
    uint32 Course2_ID;
    uint32 Course2_grade;
    uint32 Course3_ID;
    uint32 Course3_grade;
    BOOL Used;
} student;

student s[10];

void Start_the_student(){
    uint8 i;
    for ( i = 0; i < 10; i++)
    {
        s[i].Used=FALSE;
    }
}
