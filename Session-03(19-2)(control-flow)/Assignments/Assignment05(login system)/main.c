#include<stdio.h>
#include<stdlib.h>
int main(){
    int pass=1, check, i=0;
    while (i<3)
    {
        printf("Enter password\n");
        scanf("%d",&check);
        if (check==pass)
        {
            printf("Welcome.\n");
            break;
        }
        else
        {
            i++;
        }
    }
    if (i==3)
    {
        printf("blocking.\n");
    }
    return 0;
}