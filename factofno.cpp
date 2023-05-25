#include<iostream>
using namespace std;
int main()
{
    int i,num,flag=1;
    cout<<"enter a no: "<<"\n";
    cin>>num; //num=5; n!=1*2*3*4*5
    if(num>0)
    {
    for(i=1;i<=num;i++) //num=5
    {
     flag=flag*i;
    }
    cout<<"factorial of "<<num<< " is " <<flag;
    }
    else if(num==0)
        {
        cout<<"factorial of 0 is: "<<1;
        }
        else if(num<0)
        {
            cout<<"factorial can't be determined.";
        }
    }
