/*[3] Write C++ Program to display the cube of the number up to a given integer.*/
#include <iostream>
using namespace std;
class Cube
{
    int n;
    public:
        void Assign(int x)
        {
            n=x;
        }
        friend void Calc(Cube obj)
        {
            int i,p;
            for(i=1;i<=obj.n;i++)
            {
                p=i*i*i;
                cout<<i<<"^3 = "<<p<<endl;
            }
        }
};
int main()
{
    Cube c;
    int n;
    cout<<"Enter number of terms: ";
    cin>>n;
    c.Assign(n);
    Calc(c);
    return 0;
}
