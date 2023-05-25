// Read „n‟ students name, roll 
// number, branch, and total marks 
// using array of structure.
#include<iostream>
using namespace std;
struct Student
{
char name[30], branch[20];
int roll, tmarks;
void Read()
{
cout<<"Enter Name of the Student: ";
cin>>name;
cout<<"Enter Roll Number: ";
cin>>roll;
cout<<"Enter Branch: ";
cin>>branch;
cout<<"Enter the Total Marks: ";
cin>>tmarks;
}
void Show()
{
cout<<"\nName = "<<name;
cout<<"\nRoll Number = "<<roll;
cout<<"\nBranch = "<<branch;
cout<<"\nTotal Marks = "<<tmarks;
}
};
int main()
{
Student srec[100];
int n;
cout<<"How Many Student Details? ";
cin>>n; 
for(int i=0; i<n; i++)
srec[i].Read();
cout<<n<<" Student Details\n";
for(int i=0; i<n; i++)
srec[i].Show();
}
