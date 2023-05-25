//  Create a class named 'Student' with a string variable 'name' and an 
// integer variable 'roll_no'. Create two objects named 'Stud1' and 
// 'Stud2'. Input data into those objects and display it.
#include<iostream>
using namespace std;
class Student{ //creating class
    private:
    char name[20];
    int roll_no;
    public:
void input(){
    cout<<"enter your name:"<<endl;
    cin>>name;
    cout<<"enter your roll:"<<endl;
    cin>>roll_no;
}
void display()
{
    cout<<name<<endl;    
    cout<<roll_no<<endl;    
}};
int main()
{
    Student stud1,stud2;//creating objects
    stud1.input(); //taking input through objects
    stud2.input();
    stud1.display();//display through objects
    stud2.display();
}