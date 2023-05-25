/* Read a name of the student, roll 
number, branch, and total marks 
 using structure. */
#include<iostream>
using namespace std;

struct struct_n
{
    char name[20],branch[20];
    int roll,tmark;
};
int main()
{
    struct_n srec;
    cout<<"enter name:"<<endl;
    cin>>srec.name;
    cout<<"enter roll:"<<endl;
    cin>>srec.roll;
    cout<<"enter branch:"<<endl;
    cin>>srec.branch;
    cout<<"enter the total mark:"<<endl;
    cin>>srec.tmark;

    cout<<"student name:"<<srec.name;
    cout<<"student roll:"<<srec.roll;
    cout<<"student branch:"<<srec.branch;
    cout<<"student total mark:"<<srec.tmark;
}
