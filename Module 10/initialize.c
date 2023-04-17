#include<stdio.h>
int main()
{
    char a[]="Israt\0";
    for(int i=0;i<5;i++)
    {
        printf("%c\n",a[i]);
    }
    printf("\n%s",a);
    return 0;
}