#include <iostream>
using namespace std;
class NumSum7
{
    int i,f;
    public:
        NumSum7(int x, int y)
        {
            i=x;
            f=y;
        }
        friend void Calc(NumSum7 obj)
        {
            int j,c=0,s=0;
            for(j=obj.i;j<=obj.f;j++)
            {
                if(j%7==0)
                {
                    c++;
                    s+=j;
                }
            }
            cout<<c<<" numbers between 100 and 200 are divisible by 7 and their sum is "<<s;
        }
};
int main()
{
    NumSum7 n(100,200);
    Calc(n);
    return 0;
}

