#include<stdio.h>
int main()
{
    long long int eye,mouth,body,min,result;
    scanf("%lld %lld %lld",&eye,&mouth,&body);

    if(eye<body){min=eye;}
    else {min=body;}

    if(min<mouth){result=min;}
    else {result=mouth;}

    body-=result;
    eye-=result;

    if(eye/2<body){result+=eye/2;}
    else {result+=body;}

    printf("%lld",result);

    return 0;
} 