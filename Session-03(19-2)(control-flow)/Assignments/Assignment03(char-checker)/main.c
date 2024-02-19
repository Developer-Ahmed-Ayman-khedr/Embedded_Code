#include<stdio.h>
#include<stdlib.h>
int main(){
    char ch;
    printf("Please enter a character:\n");
    scanf("%c",&ch);
    switch (ch)
    {
    case 'a':
        printf("Vowel.\n");
        break;
    case 'e':
        printf("Vowel.\n");
        break;
    case 'i':
        printf("Vowel.\n");
        break;
    case 'o':
        printf("Vowel.\n");
        break;
    case 'u':
        printf("Vowel.\n");
        break;
    
    default:
        printf("Constant.\n");
        break;
    }
    return 0;
}