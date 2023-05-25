#include <iostream>
using namespace std;

int main() {
	int t,a;
	cin>>t;
	while(t-- !=0){
	    cin>>a;
	    int max=0;
	    while(a%2==0){
	        a/=2;
	        max++;
	    }
	    cout<<max<<endl;
	}
	return 0;
}
