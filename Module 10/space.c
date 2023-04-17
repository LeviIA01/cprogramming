#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    gets(a);
    printf("%s",a);
    char b[100];
    fgets(b,9,stdin);
    printf("\n%s",b);
    return 0;
}