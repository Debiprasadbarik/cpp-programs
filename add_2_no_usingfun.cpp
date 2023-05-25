#include<iostream>
using namespace std;
void add(int n1, int n2)
{
    int sum=n1+n2;
    cout<<"sum:"<<sum;
}
int main()
{
    int x,y;
    cout<<"enter two no: ";
    cin>>x>>y;
    add(x,y);
    return 0;
}