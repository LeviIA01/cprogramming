#include<stdio.h>
#include<math.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            if(n/i==i) printf("%d\n",i);
            else printf("%d\n",i);
        }
    }
    return 0;
}