#include<stdio.h>
#include<stdlib.h>
int main(){
    int number, flage=1;
    printf("Enter number\n");
    scanf("%d",&number);
    if(number==0 || number==1){
        flage=0;
    }
    for (int i = 2; i <= number/2; i++)
    {
        if (number%i==0)
        {
            flage=0;
            break;
        }
        
    }
    if (flage==1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}