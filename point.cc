#include<iostream>
using namespace std;
int main(){
    char a[] = {'m', 'a', 't', 'h'};
    char *p= &a[0];
    printf("%u\n",p);
    cout << p << endl;
}