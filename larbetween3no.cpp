#include<iostream>
using namespace std;
int main()
{
    int x,y,z;
    cout<<"enter 3 nos: "<<"\n";
    cin>>x>>y>>z;
    if(x>z)
    {
        if(x>y)
        {
            cout<<"greatest among 3no is: "<<x;
        }
        else{
            cout<<"greatest among 3no is: "<<y;
        }
    }
    else if(z>y)
    {
        cout<<"greatest among 3no is: "<<z;
    }
    else
    {
        cout<<"greatest among 3no is: "<<y;
    }
    return 0;
}