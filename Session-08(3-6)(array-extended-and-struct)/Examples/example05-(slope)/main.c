#include<stdio.h>
#include<stdlib.h>
#include "func.h"

struct point
{
    int x;
    int y;
};

int main(){
    struct point p1;
    p1.x=10;
    p1.y=20;
    struct point p2={5,6};
    struct point p3={.y=1,.x=2};
    printf("%d   %d",p3.x,p3.y);
    return 0;
}
