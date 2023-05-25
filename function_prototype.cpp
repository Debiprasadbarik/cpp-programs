#include <iostream>
using namespace std;
int add(int ,int );
int main()
{
    int result=add(12,13);
    cout<<"sum:"<<result;
    return 0;
}
int add(int n1,int n2)
{
    int sum=n1+n2;
    return sum;
}