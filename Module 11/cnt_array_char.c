#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    scanf("%s",s);
    int cnt[26]={0};
    for(int i=0;i<strlen(s);i++)
    {
        int value = s[i] - 'a' ;
        cnt[value]++;
    }
    //printing as existed alphabetical flow
    for(int i=0;i<26;i++)
    {
        if((cnt[i]!=0))
        {
            printf("%c - %d\n",i+'a',cnt[i]);
        }
    }
    //printing as giving string flow
    for(int i=0;i<strlen(s);i++)
    {
        int value =s[i]-97;
        if((cnt[value]!=0))
        {
            printf("\n%c - %d",value+'a',cnt[value]);
        }
        cnt[value]=0;
    }
    return 0;
}