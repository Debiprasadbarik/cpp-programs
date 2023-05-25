/*[4] Write a C++ program to find out the sum of an A.P (Arithmetic 
Progression) series.*/
#include <iostream>
using namespace std;
class APSum
{
    int a,n,d;
    public:
        void Assign(int x, int y, int z)
        {
            a=x;
            n=y;
            d=z;
        }
        friend void Calc(APSum obj)
        {
            int i,t,s=0;
            for(i=1;i<=obj.n;i++)
            {
                t=obj.a+((i-1)*obj.d);
                cout<<t;
                if(i!=obj.n)
                    cout<<" + ";
                s+=t;
            }
            cout<<" = "<<s;
        }
};
int main()
{
    APSum s;
    int a,n,d;
    cout<<"Enter starting number: ";
    cin>>a;
    cout<<"Enter number of terms: ";
    cin>>n;
    cout<<"Enter common difference between the terms: ";
    cin>>d;
    s.Assign(a,n,d);
    cout<<"Series Sum"<<endl;
    Calc(s);
    return 0;
}
