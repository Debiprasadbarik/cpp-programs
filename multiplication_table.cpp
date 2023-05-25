#include<iostream>
using namespace std;
int main()
{
    int i,n,mul;
    cin>>n;
    for(i=0;i<=10;i++)
    {
        mul=n*i;
        cout<<n<<"*"<<i<<"="<<mul<<"\n";
    }
}