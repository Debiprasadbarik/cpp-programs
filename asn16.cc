#include <iostream>
using namespace std;
class Fibonacci
{
    int n;
    public:
        void Assign(int x)
        {
           n=x;
        }
        friend void Calc(Fibonacci obj)
        {
            int a=0,b=1,c,i;
            cout<<a<<" "<<b<<" ";
            for(i=3;i<=obj.n;i++)
            {
                c=a+b;
                cout<<c<<" ";
                a=b;
                b=c;
            }
        }
};
int main()
{
    Fibonacci f;
    int n;
    cout<<"Enter number of terms of the Fibonacci series: ";
    cin>>n;
    f.Assign(n);
    cout<<"The Fibonacci series with "<<n<<" terms"<<endl;
    Calc(f);
    return 0;
}
