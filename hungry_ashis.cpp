#include <iostream>
using namespace std;

int main() {
	int n,i,mo,pi,bu;
	cin>>n;
	for(i=0;i<n;i++)
	{
	    cin>> mo >> pi >> bu;
	        if(mo>pi)
	        {
	            cout<<"PIZZA"<<"\n";
	        }else if(mo<pi)
	        {
	            if(mo>bu)
	            {
	                cout<<"BURGER"<<"\n";
	            }else
	            {
	                cout<<"NOTHING"<<"\n";
	            }
	        }
	}
	return 0;
}
