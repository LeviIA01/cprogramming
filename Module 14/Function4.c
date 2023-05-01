#include<stdio.h>
//Type 4 function(No Return type +No Parameter) Syntax
// void function_name(void)
// {
//     data_type variable_name;
//     scanf("%format_specifier",&variable_name);
//     code;
//     print result;
//     return;
// }

//type 1 delcaration+ defining function

void sum(void)
{
    int x,y;
    scanf("%d %d",&x,&y);

    int add=x+y;
    
    //type 1  printing 
    int s=add;
    printf("%d",s);

    return;
}

//type 2 declaration
void sub(void); 

int main()
{
    //calling 
    sum();
    sub();

    return 0;
}

//type 2 defining function

void sub(void)
{
    int a,b;
    scanf("%d %d",&a,&b);
    int sub;

    if(a>b)
    {
        sub=a-b;
    }
    else
    {
        sub=b-a;
    }

    //type 2 printing 
    printf("\n%d",sub);

    return;
}