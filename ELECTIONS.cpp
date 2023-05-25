#include <iostream>
using namespace std;
int main() {
	int n,a,b,c,i,vote=50;
	cin>>n;
	for(i=0;i<n;i++)
	{
	    cin>>a>>b>>c;
	    if(a>vote)
	    {
	        cout<<"A"<<"\n";
	    }else if(b>vote){
	        cout<<"B"<<"\n";
	    }else if(c>vote){
	        cout<<"C"<<"\n";
	    }else if(a<vote || b<vote || c<vote){
	        cout<<"NOTA"<<"\n";
	    }
	}
	return 0;
}
