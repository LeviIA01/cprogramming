#include<stdio.h>
//Type 1 function
int char_to_ascii(char ch)
{
    return ch;
}
char small_to_capital(char ch)
{
    return ch-32;
}
char capital_to_small(char ch)
{
    return ch+32;
}

int main()
{
    char s;
    scanf("%c",&s);
    printf("%d",char_to_ascii(s));

    char small;
    scanf(" %c",&small);
    printf("\n%c",small_to_capital(small));

    char cap;
    scanf(" %c",&cap);
    printf("\n%c",capital_to_small(cap));
    
    return 0;
}