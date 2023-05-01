#include<stdio.h>
#include<string.h>
int main()
{
    char s[1001];
    scanf("%s",s);
    int i,cnt=0,len=strlen(s);
    for(i=0;i<len;i++)
    {
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
        {
            cnt++;
        }
    }
    printf("%d",cnt);
    return 0;
}