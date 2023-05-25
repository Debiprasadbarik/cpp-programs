#include<iostream>
using namespace std;
int main()
{
    int i, data[10]={12,10,9,4,18,34,45,67,56,89};
        data[0]=1;
        data[5]=28;
        cout<<"all datas are: ";
    for(i=0;i<10;i++)
    {
        cout<<data[i]<<",";
    }
    return 0;
}