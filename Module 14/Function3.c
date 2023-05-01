#include<stdio.h>
//Type 3 function(No Return type + Parameter) Syntax
// void function_name(parameter)
// {
//     code;
//     print result;
//     return;
// }

//type 1 delcaration+ defining function

void sum(int x,int y)
{
    int add=x+y;
    
    //type 1  printing 
    int s=add;
    printf("%d",s);
    return;
}

//type 2 declaration
void sub(int a,int b); 

int main()
{
    //calling 
    int x,y;
    scanf("%d %d",&x,&y);
    sum(x,y);

    int a,b;
    scanf("%d %d",&a,&b);
    sub(a,b);

    return 0;
}

//type 2 defining function

void sub(int a,int b)
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
    //type 2 printing 

    printf("\n%d",sub);
    return;
}