#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int ar[n+1];
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    int pos,val;
    scanf("%d %d",&pos,&val);

    for(i=n;i>=pos+1;i--)
    {
        ar[i]=ar[i-1];
    }
    ar[pos]=val;
    for(i=0;i<=n;i++)
    {
        printf("%d ",ar[i]);
    }
    return 0;
}