#include<stdio.h>
//Type 2 function(Return type + No Parameter) Syntax
// return_type function_name()
// {
//     data_type variable_name;
//     scanf("%format_specifier",&variable_name);
//     code;
//     return result;
// }

//type 1 delcaration+ defining function

int sum()
{
    int x,y;
    scanf("%d %d",&x,&y);
    int add=x+y;
    return add;
}

//type 2 declaration
int sub(); 

int main()
{
    //type 1 calling + printing 
    int s=sum();
    printf("%d",s);

    //type 2 calling + printing 

    printf("\n%d",sub());

    return 0;
}

//type 2 defining function

int sub()
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
    return sub;
}