#include<iostream>
using namespace std;
int main()
{
    int i,n,sum=0;
    cout<<"1st __th natural no: "<<"\n";
    cin>>n;
    for(i=1;i<=n;++i) //n=5(say)=1+2+3+4+5=15
    {
      sum=sum+i;
    }
    cout<<sum<<" is the sum of 1st "<<n<<" numbers of positive natural numbers" ;
    return 0;
}