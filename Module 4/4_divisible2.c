#include <stdio.h>
int main() 
{
    int n,i;
    scanf("%d",&n);
    for(i=21;i<=n;i++)
    {
        if(i%3==0 && i%7==0)
        {
            printf("%d\n",i);
        }
    }
    
    return 0;
}