#include<stdio.h>
//global variable
int x=500;


void fun(void)
{
//s is limited within fun function's block
    int s=200;
    printf("\n\nAddress of FUN function's S:\n%p",&s); 

    printf("\n\nIn FUN function x=%d\n",x);
}
int main()
{   
//s is limited within main function's block
    int s=100;
    printf("Address of MAIN function's S:\n%p\n",&s);

    printf("\n\nIn MAIN function x=%d\n",x);

    fun();

    

    

    return 0;
}