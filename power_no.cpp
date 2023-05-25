#include <iostream>
using namespace std;
int main()
{
    double n,p,i,result=1;
    cout<<"what is the base no ?"<<"\n";
    cin>>n;
    cout<<"what is the power of the base ?"<<"\n";
    cin>>p;
    for(i=1;i<=p;i++)
    {
        result=result*n;
    }
    cout<<"the value of base "<< n<<" power "<< p<<" is "<<result;
}