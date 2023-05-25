#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,s,flag;
    cin>>n;  //11 say
    for(i=0;i<n;i++)
    {
        cin>>s;
        if(s<0)
        {
           flag=s;
           cout<<flag<<" ,";
        }
    }
    return 0;


}