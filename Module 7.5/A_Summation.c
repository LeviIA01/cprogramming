#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    long long int sum;
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    if(sum<0){sum=sum*(-1);}
    printf("%lld",sum);
    return 0;
}