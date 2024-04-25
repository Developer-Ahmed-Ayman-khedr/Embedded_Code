#include<stdio.h>
#include<stdlib.h>
int main (){
    char ch=65;
    float fl=1.5;
    int x=50;
    short int y=40;
    long long z=200;
    int res=sizeof(y);
    int res2=sizeof(z);
    int result = sizeof(ch);
    int re=sizeof(x);
    int in= sizeof(fl);
    printf("%c.\n %d.\n",ch,result);
    printf("int = %d .\nfloat = %d .\nchar = %d .\nshort int = %d .\nlong long int = %d .\n",re,in,result,res,res2);
    return 0;
}