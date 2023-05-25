#include<iostream>
using namespace std;
int main()
{
    int a,b,swapeda,swapedb;
    cout<<"enter two nos: ";
    cin>>a>>b;
    cout<<"value of a before swaping: "<<a<<"\n";
    cout<<"value of b before swaping: "<<b<<"\n";
    a=a+b;
    b=a-b;
    a=a-b;
    swapeda=a;
    swapedb=b;
    cout<<"value of a after swaping: "<<swapeda<<"\n";
    cout<<"value of b after swaping: "<<swapedb;
    return 0;
}