#include<stdio.h>
#include<stdlib.h>
#include "func.h"

struct point
{
    int x;
    int y;
};

int main(){
    struct point p1,p2;
    printf("Enter x1:\n");
    scanf("%d",&p1.x);
    printf("Enter y1:\n");
    scanf("%d",&p1.y);
    printf("Enter x2:\n");
    scanf("%d",&p2.x);
    printf("Enter y2:\n");
    scanf("%d",&p2.y);
    float result = (p2.y-p1.y)/(p2.x-p1.x);
    printf("%f\n",result);
    return 0;
}
