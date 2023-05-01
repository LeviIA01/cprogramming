#include<stdio.h>
#include<string.h>
int main()
{
    char s[1001];
    scanf("%s",s);
    int i,cap=0,sml=0,len=strlen(s);
    for(i=0;i<len;i++)
    {
        if(s[i]>='a' && s[i]<='z')
        {
            sml++;
        }
        else if(s[i]>='A' && s[i]<='Z')
        {
            cap++;
        }
    }
    printf("%d %d",cap,sml);
    return 0;
}