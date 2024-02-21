#include<stdio.h>
#include<stdlib.h>
int main(){
    int pass=1, check;
    for (int i=0;i<3;i++)
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
            
            if (i==2)
            {
                printf("blocking.\n");
                break;
            }
            printf("Try again:\n");
        }
    }
    return 0;
}