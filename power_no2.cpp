// #include<iostream>
// using namespace std;
// int power_no(int n, int p)
// {
//     int result;
//     int i,q,r;
//      cout<<"what is the base no ?"<<"\n";
//     cin>>q;
//     cout<<"what is the power of the base ?"<<"\n";
//     cin>>r;
//      for(i=1;i<=r;i++)
//     {
//         result=result*q;
//     }
//     return result;
// }
// int main()
// {   int result1;
//  int i,n,p;
//     result1=power_no(n,p);
//     cout<<"the value of base "<< n<<" power "<< p<<" is "<<result1;
//     return 0;
// }
#include<iostream>
using namespace std;

int prime(int y)
{
    int i,count=0;
    for(i=2;i<=y/2;i++) if(y%i==0) count++;
    // for(int i = 2; i<=y/2; i++){
    //     if(y % i == 0) 
    // }
       
    if(count>=1) return 0;
    else return 1;
}
int main()
{
    int a,b,k;
    cin>>a;
    cin>>b;
    for(int j=a;j<b;j++)
    {
        if(prime(j)==1)
        {
            cout<<j<<endl;
        }
    }
}
