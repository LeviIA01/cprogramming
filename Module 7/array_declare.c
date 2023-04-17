#include<stdio.h>
int main()
{
    int ar[5];
    for(int i=0;i<5;i++)
    {
        printf("index %d ",i);
        printf("ar[%d]\n",i);
    }
    for(int i=0;i<5;i++)
    {
       scanf("%d",&ar[i]); 
    }
    for(int i=0;i<5;i++) 
    {
        printf("\nar[%d] = %d",i,ar[i]);
    }
    return 0;
}