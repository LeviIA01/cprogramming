#include<stdio.h>
int main()
{
    //variable
    int x=10;
    //variable's address
    printf("%p\n",&x);
    //pointer variable
    int *p= &x;
    //pointer variable's value
    printf("%p\n",p);
    //dereference
    printf("%d\n",*p);
    //using dereference to change x's value
    *p=100;
    printf("%d\n",x);
    return 0;
}