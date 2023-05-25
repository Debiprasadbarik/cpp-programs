#include<iostream>
using namespace std;

int main()
{    
    int t,count=0;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        for(int i=0;i<=n;i++)
        {
            if(i%2==0){
                count++;
            }
        }
        cout<<count<<endl;
        count=0;
    }
    return 0;
}