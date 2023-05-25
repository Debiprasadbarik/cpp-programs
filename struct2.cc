/*Read „n‟ students name, roll 
 number, branch, and total marks 
 using array of structure.*/
#include<iostream>
using namespace std;
 
struct student{
    char name[30],branch[20];
    int roll ,tmark;
};
int main()
{
    student srec[100];
    int n;
    cout<<"How Many Student Details? ";
    cin>>n; 
for(int i=0; i<n; i++)
{
    cout<<"Enter Name of the Student: ";
    cin>>srec[i].name;
    cout<<"Enter Roll Number: ";
    cin>>srec[i].roll;
    cout<<"Enter Branch: ";
    cin>>srec[i].branch;
    cout<<"Enter the Total Marks: ";
    cin>>srec[i].tmark;
}
    cout<<n<<" Student Details\n";
for(int i=0; i<n; i++)
{
    cout<<"\nName = "<<srec[i].name;
    cout<<"\nRoll Number = "<<srec[i].roll;
    cout<<"\nBranch = "<<srec[i].branch;
    cout<<"\nTotal Marks = "<<srec[i].tmark;
}
}