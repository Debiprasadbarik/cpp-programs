#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int pattern(int n)
{
     for(int i=0;i<=n;i++)  //9
   {
       for(int j=0;j<=i;j++)
       {
           cout<<"*";
       }
       cout<<"\n";
   }
 return 0;
}
int main()
{
   int n;
   cin>>n;
   pattern(n);
  
}
