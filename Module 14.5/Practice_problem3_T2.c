#include<stdio.h>
//Type 2 function
int char_to_ascii(void)
{
    char ch;
    scanf("%c",&ch);
    return ch;
}
char small_to_capital(void)
{
    char ch;
    scanf(" %c",&ch);
    return ch-32;
}
char capital_to_small(void)
{
    char ch;
    scanf(" %c",&ch);
    return ch+32;
}
int main()
{
    printf("%d",char_to_ascii());
    printf("\n%c",small_to_capital());
    printf("\n%c",capital_to_small());
    
    return 0;
}