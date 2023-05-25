#include<iostream>
using namespace std;
int main()
{
    int n,i;
    string str[20]={"greater than 7","one","two","three","four","five","six","seven"};
    cout<<"enter a no:"<<"\n";
    cin>>n;
    if(n<=7)
          cout<<str[n];
    else{cout<<str[0];}    
    return 0;
}