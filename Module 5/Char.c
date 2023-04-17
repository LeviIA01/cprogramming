#include<stdio.h>
int main()
{
    char ch;
    int ans;
    scanf("%c",&ch);
    if('A'<=ch && ch<='Z')
    {
        ans=ch+32;
        printf("%c",ans);
    }
    else
    {
        ans=ch-32;
        printf("%c",ans);
    }

    return 0;
}