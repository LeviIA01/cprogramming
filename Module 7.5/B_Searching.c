#include<stdio.h>
int main()
{
    int n,i,x;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&x);
    int res=-1;
    for(i=0;i<n;i++)
    {
        if(a[i]==x){res=i;break;}
    }
    printf("%d",res);
    
    return 0;
}