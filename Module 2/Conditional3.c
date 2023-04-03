#include<stdio.h>
int main()
{
    int tk;
    scanf("%d",&tk);
    if(tk>=5000)
    {
        printf("I'll go Cox's Bazaar.");
        if(tk>=10000)
        {
            printf("\nI'll also go Saint Martin.");
        }
        else
        {
            printf("\nI'll not go Saint Martin.");

        }

    }
    else
    {
        printf("I'll not go anywhere.");

    }
}