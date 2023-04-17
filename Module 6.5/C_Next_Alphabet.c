#include<stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    
    if(ch>=97 && ch<122) {ch=ch+1;}
    else if(ch==122) {ch=97;}
    printf("%c",ch);
    return 0;
}