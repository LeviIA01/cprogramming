#include<stdio.h>
#include<string.h>
int main()
{
    char x[21],y[21];
    scanf("%s %s",x,y);

    int ans=strcmp(x,y);
    if(ans>0)
    {
        printf("%s",y);
    }
    else if(ans<0)
    {
        printf("%s",x);
    }
    else
    {
        printf("%s",x);
    }

    return 0;
}