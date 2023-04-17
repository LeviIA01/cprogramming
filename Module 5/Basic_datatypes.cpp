#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int a;
    float b;
    double c;
    char d;
    long long e;
    cin>>a>>e>>d>>b>>c;
    cout<<a<<"\n"<<e<<"\n";
    cout<<d<<"\n"<<b<<"\n";
    cout<<setprecision(6)<<c<<endl;
    
    return 0;
}