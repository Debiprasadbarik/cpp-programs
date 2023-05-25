/*[2] Write C++ Program to find the Sum of ‘n’ number of odd natural 
numbers.*/
#include <iostream>
using namespace std;
class SumOdd
{
    private:
    int n;
    public:
        void Assign(int x)
        {
            n=x;
        }
        friend void Calc(SumOdd obj)
        {
            int i,j,s=0;
            for(i=1,j=1;i<=obj.n;i++,j+=2)
                s+=j;
            cout<<s;
        } 
};
int main()
{
    SumOdd s;
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    s.Assign(n);
    cout<<"The odd series sum from 1 to "<<n<<" = ";
    Calc(s);
    return 0;
}
