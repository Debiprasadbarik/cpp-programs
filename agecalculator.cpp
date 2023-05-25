#include<iostream>
using namespace std;
int main()
{
    int d1,m1,y1,result;
    int d2,m2,y2;
    cout<<"enter today-date,time,year in dd/mm/yyyy format."<<endl;
    cin>>d1>>m1>>y1;
    cout<<"enter date of birth in dd/mm/yyyy format."<<endl;
    cin>>d2>>m2>>y2;
    if(y1>y2)
    cout<<y1-y2<<"-years";
    if(m1>m2)
    cout<<m1-m2;
}
