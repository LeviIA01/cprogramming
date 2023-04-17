#include<stdio.h>
int main()
{
    int n,i,sum;
    scanf("%d",&n);
    int ar[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i=0;i<n;i++)
    {
         sum=sum+ar[i];
    }
    printf("%d",sum);
    return 0;
}