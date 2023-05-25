#include<iostream>
using namespace std;
int main(){
    int a,n,i,rem,ans=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a;
      for(;a>0;a=a/10)
      {
          rem=a%10;
          ans=ans*10+rem;
      }
      cout<<ans<<endl;
      ans=0;
    }
    return 0;
}
