#include<stdio.h>
//Type 4 function
void char_to_ascii(void)
{
    char ch;
    scanf("%c",&ch);
    printf("%d",ch);
    return ;
}
void small_to_capital(void)
{
    char ch;
    scanf(" %c",&ch);
    printf("\n%c",ch-32);
    return ;
}
void capital_to_small(void)
{
    char ch;
    scanf(" %c",&ch);
    printf("\n%c",ch+32);
    return ;
}
int main()
{
    char_to_ascii();
    small_to_capital();
    capital_to_small();

    return 0;
}