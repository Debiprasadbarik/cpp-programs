#include <iostream>
using namespace std;

int main() {
	int a,n,i,rem,check=0;
	cin>>n;
	for(i=0;i<n;i++){
	while(n>0)
	{
		rem=n%10;
		n=n/10;
		if(rem==4)
		{
           check++;
		}
		
	}}cout<<check<<endl;
	return 0;
}
