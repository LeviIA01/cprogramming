#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i;
    for(i<0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int min=a[0];
    int index=1;
    for(i=0;i<n;i++)
    {
        if(min>a[i])
        {
            min=a[i];
            index=i+1;
        }
    }
    printf("%d %d",min,index);
    return 0;
}