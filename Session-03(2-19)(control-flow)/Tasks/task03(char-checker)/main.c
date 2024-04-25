#include<stdio.h>
#include<stdlib.h>
int main(){
    char ch;
    printf("Please enter a character:\n");
    scanf("%c",&ch);
    switch (ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        printf("Vowel.\n");
        break;
    default:
        printf("Constant.\n");
        break;
    }
    return 0;
}