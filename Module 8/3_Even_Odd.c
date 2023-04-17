#include <stdio.h>
int main() 
{
    int n,i,sum=0,sum1=0;
    scanf("%d",&n);
    int v[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&v[i]);
    }
    for(i=0;i<n;i++)
    {
        if(v[i]%2==0)
        {
            sum=sum+v[i];
        }
        else
        {
            sum1=sum1+v[i];
        }
    }
    printf("%d %d",sum,sum1);
    return 0;
}