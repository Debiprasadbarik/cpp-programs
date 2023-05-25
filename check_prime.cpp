#include <iostream>
using namespace std;
int main()
{
int no,i,flag=0;
cout<<"enter a no: "<<"\n"; //say no=9
cin>>no;
if(no==1)
{
    cout<<"it is not a prime no.";
}
else if(no==0)
{
    cout<<"it is not a prime no.";
}
else if(no>1)
{
  for(i=2;i<=no-1;i++)
  {
      if(no%i==0)   
      {
          flag=1;
      }
  }
  if(flag==1)
      cout<<"it is not a prime no.";
else
  cout<<"hurry..it's a prime no.";
return 0;
}
}
