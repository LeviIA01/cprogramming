#include<stdio.h>
int main()
{
    int i=10;
    int x,y;
    printf("i=%d\n",i);
    x=i++;
    printf("Post INC : x=%d i=%d\n",x,i);
    y=++i;
    printf("Pre INC : y=%d i=%d ",y,i);
    return 0;
}