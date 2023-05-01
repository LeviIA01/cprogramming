#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
    double x;
    scanf("%lf",&x);

    int ans=ceil(x);
    printf("%d",ans);

    ans=floor(x);
    printf("\n%d",ans);

    ans=round(x);
    printf("\n%d",ans);

    float ans1=sqrt(x);
    printf("\n%.2f",ans1);

    double ans2=pow(x,2.5);
    printf("\n%.2lf",ans2);

    ans=abs(x);
    printf("\n%d",ans);

    return 0;
}