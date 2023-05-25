#include<iostream>
using namespace std;
int main()
{
    int a=10,b,c;
    b=a++ + ++a;
    c=++b + a++;
    a=++a + a++ + ++b + c++ + a;
    cout<<a<<endl<<b<<endl<<c;
}
//preincrement= 1st increase value by +1 then assign.
//post increment= 1st assign value then increase the  value by +1.