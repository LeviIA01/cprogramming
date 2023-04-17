#include<stdio.h>
#include<string.h>
int main()
{
    char s[1001];
    char t[1001];

    gets(s);
    gets(t);
    
    int len_s,len_t;
    len_s= strlen(s);
    len_t= strlen(t);

    printf("%d %d\n",len_s,len_t);

    printf("%s %s",s,t);
    return 0;
}