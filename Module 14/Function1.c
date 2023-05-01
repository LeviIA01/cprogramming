#include<stdio.h>
//Type 1 function(Return type + Parameter) Syntax
// return_type function_name(Parameters)
// {
//     code;
//     return result;
// }

//type 1 delcaration+ defining function

int sum(int x,int y)
{
    int add=x+y;
    return add;
}

//type 2 declaration
int sub(int a,int b); 

int main()
{
    //type 1 calling + printing 
    int s=sum(10,20);
    printf("%d",s);

    //type 2 calling + printing 

    printf("\n%d",sub(20,100));

    return 0;
}

//type 2 defining function

int sub(int a,int b)
{
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