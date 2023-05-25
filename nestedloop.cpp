#include<iostream>
using namespace std;
int main()
{
    int i,j,num;
    cout<<"enter a no: "<<"\n";
    cin>>num;
    for(i=0;i<=num;i++)
    {
        for(j=0;j<=i;j++)
        {
            cout<<i;
        }
    }
}