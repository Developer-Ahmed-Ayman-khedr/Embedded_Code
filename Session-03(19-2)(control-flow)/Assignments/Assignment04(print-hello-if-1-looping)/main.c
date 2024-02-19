#include<stdio.h>
#include<stdlib.h>
int main(){
    int number=1;
    printf("If you want to print hello enter 1\n");
    scanf("%d",&number);
    while(number==1){
        printf("Hello:\nIf you want to repeat please enter 1:\n");
        scanf("%d",&number);
    }
    printf("Final.\n");
    return 0;
}