#include<iostream>
using namespace std;
int add(int n1, int n2)
{
    return n1+n2;
}
int product(int n1, int n2)
{
    return n1*n2;
}   
int main()
{
    int x,y,result1,result2;
    cout<<"enter two no for sum and product: "<<"\n";
    cin>>x>>y;
    result1=add(x,y);
    cout<<"sum: "<<result1<<"\n";
    result2=product(x,y);
    cout<<"product: "<<result2<<"\n";
    return 0;
}