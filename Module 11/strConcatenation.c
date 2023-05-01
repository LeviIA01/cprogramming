#include<stdio.h>
#include<string.h>
int main()
{
    char a[200],b[100];
    scanf("%s %s",a,b);
    //manually concatenation
    int k=strlen(a);
    for(int i=0;i<=strlen(b);i++)
    {
        a[k]=b[i];
        k++;
    }
    printf("%s %s",a,b);

    //built in concatenation function
    char c[200],d[100];
    scanf("%s %s",c,d);
    strcat(d,c);
    printf("\n%s %s",c,d);

    //concatenating only few indices

    k=strlen(c);
    for(int i=0;i<=1;i++)
    {
        c[k]=d[i];
        k++;
    }
    c[k]='\0';
    printf("\n%s %s",c,d);

    return 0;
}