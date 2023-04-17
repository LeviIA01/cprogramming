#include<stdio.h>
int main()
{
    int a;
    long long int b;
    scanf("%d %lld",&a,&b);
    int sum=a+b;
    int sub=a-b;
    long long int mul=a*b;
    printf("%d + %lld = %d\n",a,b,sum);
    printf("%d * %lld = %lld\n",a,b,mul);
    printf("%d - %lld = %d",a,b,sub);
    return 0;
}