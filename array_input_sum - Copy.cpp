#include<iostream>
using namespace std;
int main()
{
    int sum=0,i,da[5];
    cout<<"enter 5 elements"<<"\n";
    for(i=0;i<5;i++)
    {
        cin>>da[i];
    }
    cout<<"entered elements are: "<<"\n";
    for(i=0;i<5;i++)
    {
        cout<<da[i]<<",";
        sum=sum+da[i];
    }
    cout<<"sum of all elements: "<<sum;
    return 0;
}