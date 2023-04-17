#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    gets(a);
    //using for loop
    int cnt=0;
    for(int i=0;a[i]!='\0';i++)
    {
        cnt++;
    }
    printf("%d\n",cnt);
    //using while loop
    int count=0,j=0;
    while(a[j]!=0)
    {
        count++;
        j++;
    }
    printf("%d\n",count);
    //using strlen function
    int st=strlen(a);
    printf("%d",st);
    
    return 0;
}