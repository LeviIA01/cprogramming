#include<stdio.h>
//Type 3 function
void char_to_ascii(char ch)
{
    printf("%d",ch);
    return ;
}
void small_to_capital(char ch)
{
    printf("\n%c",ch-32);
    return ;
}
void capital_to_small(char ch)
{
    printf("\n%c",ch+32);
    return ;
}

int main()
{
    char s;
    scanf("%c",&s);
    char_to_ascii(s);

    char small;
    scanf(" %c",&small);
    small_to_capital(small);

    char cap;
    scanf(" %c",&cap);
    capital_to_small(cap);

    return 0;
}