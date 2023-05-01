#include<stdio.h>
#include<string.h>
int main()
{
    char s[1001];
    scanf("%s",s);
    int cnt[26]={0};
    int len=strlen(s),i;
    for(i=0;i<len;i++)
    {
        int v= s[i]-97;
        cnt[v]++;
    }
    for(i=0;i<26;i++)
    {
        printf("%c - %d\n",i+97,cnt[i]);
    }
    return 0;
}