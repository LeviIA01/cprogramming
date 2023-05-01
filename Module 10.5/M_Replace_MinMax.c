#include<stdio.h>
#include<limits.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int max,min,maxI,minI;
    max=INT_MIN;
    min=INT_MAX;
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
            maxI=i;
            
        }
        
        if(a[i]<min)
        {
            min=a[i];
            minI=i;
        }
        
    }
    int temp;
    temp=a[minI];
    a[minI]=a[maxI];
    a[maxI]=temp;

    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}