#include <iostream>
using namespace std;
int main() {
	int test,target,over,run,res=0,tempover;
	int fover=20;
	cin>>test;
	while(test--){
	    int calc;
	    cin>>target>>over;
	    tempover=over;
	    if(over==0){
            calc=target/(fover-over);
	        if(calc <=10)
	        cout<<"MI"<<endl;
	        else
	        cout<<"CSK"<<endl;
	    }
	    else{
	        while(tempover--){
	            cin>>run;
	            res=res+run;
	        }
	            if((target-res)/(fover-over) <=10)
	            cout<<"MI"<<endl;
	            else
	            cout<<"CSK"<<endl;
	    }
	}
	return 0;
}
