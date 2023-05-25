#include<iostream>
using namespace std;
int main()
{
    int a=23;
    void *ptr;
    ptr=&a;
    //cout<<*ptr;
    cout<<ptr;
    cout<<&a<<endl;
    cout<<(*(int*)ptr);
}