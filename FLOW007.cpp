#include<iostream>
using namespace std;
int main(){
    int a,n,i,rem,ans;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a;
       while(a>0)
       {
           rem=a%10;
           a=a/10;
            ans=rem;
            cout<<ans;
       }cout<<endl;
    }
    return 0;
}
