#include<iostream>
using namespace std;
int main()
{
    int no,i;
    cout<<"enter a number: "<<"\n";
    cin>>no; //6
    //we gonna find all the factor of a number...
    cout<<"All the factors of  are:";
    for(i=1;i<=no;i++)
    {
        if(no%i==0)
        {
         cout<<i<<",";
        }
    }
    return 0;
}