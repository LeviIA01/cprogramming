#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char s[100];
        scanf("%s",s);
        
        if(strlen(s)>10)
        {
            int n=strlen(s)-1;
            printf("%c%d%c\n",s[0],strlen(s)-2,s[n]);
        }
        else if(strlen(s)<=10)
        {
            printf("%s\n",s);
        }
    }
    return 0;
}