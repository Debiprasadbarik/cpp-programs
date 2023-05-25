#include <iostream>
using namespace std;
int main() {
	int a,n,rem,i,count;
	cin>>n;
	for(i=0;i<n;i++)
	{
	    cin>>a;
	    while(a>0){
	        rem=a%10;
	        a=a/10;
	        if(rem==4)
	        {
	            count++;
	        }}
	        cout<<count<<endl;
	         count=0;
	}
	return 0;
}




