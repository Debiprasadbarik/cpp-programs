#include<iostream>
using namespace std;
class student // indirect base class
{
protected:
char n[20], b[10]; 
int roll;
public:
void Get ( )
{
cout<<"Enter Name, Branch, and Roll : "; 
cin>>n>>b>>roll;
}
};
// direct base class
class internal : public virtual student 
{
protected:
int imark;
public:
void Get ( )
{
cout<<"Enter Internal Mark : "; 
cin>>imark;
}
};

// direct base class
class external : public virtual student
{
protected:
int emark;
public:
void Get ( )
{
cout<<"Enter External Mark : "; 
cin>>emark;
}
};

class result : public internal, external {
int tot;
public:
void Get ( ) {
// invoking of virtual base class member 
// function which avoids ambiguity
student :: Get ( ); 
internal :: Get ();
external :: Get (); }
void Out ( ) {
tot = imark + emark; 
cout<<"Name : "<<n<<endl; 
cout<<"Branch : "<<b<<endl; 
cout<<"Roll : "<<roll<<endl;
cout<<"Total Marks : "<<tot<<endl; }
};

int main ( ) {
result obj;
obj.Get ();
obj.Out (); }