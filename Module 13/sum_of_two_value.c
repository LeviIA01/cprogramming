#include<stdio.h>
int main()
{
    int n,sum,i,j;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int x;
    scanf("%d",&x);
    int flag=0;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]+a[j]==x)
            {
                flag=1;
            }
        }
    }
    if(flag==0)
    {
        printf("No\n");
    }
    else if(flag==1)
    {
        printf("Yes\n");
    }
    return 0;
}