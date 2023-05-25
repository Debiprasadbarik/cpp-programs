#include <iostream>
using namespace std;

int main() {
	int n,i,rem,a;
	cin>>n;
	for(i=0;i<n;i++)
	{
	    cin>>a;
	    if(a!=0){
	        rem=52%a;
	        cout<<rem<<"\n";
	    }
	}
	return 0;
}
