#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100];
    scanf("%s %s",a,b);
    for(int i=0;i<strlen(b);i++)
    {
        a[i]=b[i];
    }
    printf("%s %s\n",a,b);
    
    char c[100],d[100];
    scanf("%s %s",c,d);
    strcpy(d,c);
    printf("%s %s",d,c);

    return 0;
}