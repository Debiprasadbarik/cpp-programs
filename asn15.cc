#include <iostream>
using namespace std;
class Sum
{
    int i,f;
    public:
        void Assign(int x, int y)
        {
            i=x;
            f=y;
        }
        friend void Calc(Sum obj)
        {
            int j,s=0;
            for(j=obj.i;j<=obj.f;j++)
            {
                cout<<j;
                if(j!=obj.f)
                    cout<<" + ";
                s+=j;
            }
            cout<<" = "<<s;
        }
};
int main()
{
    Sum s;
    int i,f;
    cout<<"Enter initial value: ";
    cin>>i;
    cout<<"Enter number of terms: ";
    cin>>f;
    s.Assign(i,f);
    cout<<"Series Sum from "<<i<<" to "<<f<<endl;
    Calc(s);
    return 0;
}
