#include<iostream>
using namespace std;
int main()
{
    int a=19,b,c,d,e=1;
    b= a++ - e++ + ++a;
    c= --b - --e;
    d= ++a;
    e= c++ -d;
    cout<<a<<endl<<b<<endl<<c<<endl<<d<<endl<<++e; //a=22,b=38,c=38,d=22,e=16
}