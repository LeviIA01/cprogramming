#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int l=n/10;
    int r=n%10;
    if(r%l==0 || l%r==0){printf("YES");}
    else {printf("NO");}
    return 0;
}