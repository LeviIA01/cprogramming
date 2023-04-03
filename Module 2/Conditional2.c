#include<stdio.h>
int main()
{
    int tk;
    scanf("%d",&tk);
    if(tk>=100)
    {
        printf("I'll eat burger.");
    }
    else if (tk>=50)
    {
        printf("I'll eat fuchka.");

    }
    else if (tk>=20)
    {
        printf("I'll eat ice cream.");

    }
    else
    {
        printf("I'll not eat burger.");

    }
}