#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a, &b);
    int sum,sub,mul;
    float div;
    sum=a+b;
    sub=a-b;
    mul=a*b;
    div=(a*1.00)/b;
    printf("%d + %d = %d\n",a,b,sum);
    printf("%d - %d = %d\n",a,b,sub);
    printf("%d * %d = %d\n",a,b,mul);
    printf("%d / %d = %.2f",a,b,div);
    return 0;
}