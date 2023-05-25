// #include<iostream>
// using namespace std;
// struct Student
// {
// char name[30], branch[20];
// int roll, tmarks;
// };

// int main()
// {
// Student srec;
// cout<<"Enter Name of the Student: ";
// cin>>srec.name;
// cout<<"Enter Roll Number: ";
// cin>>srec.roll;
// cout<<"Enter Branch: ";
// cin>>srec.branch;
// cout<<"Enter the Total Marks: ";
// cin>>srec.tmarks;
// cout<<"Student Name = "<<srec.name;
// cout<<"\nRoll Number = "<<srec.roll;
// cout<<"\nBranch = "<<srec.branch;
// cout<<"\nTotal Marks = "<<srec.tmarks;
// }

// #include<iostream>
// using namespace std;
// struct Student
// {
// char name[30], branch[20];
// int roll, tmarks;
// };
// int main()
// {
// Student sec[100];
// int n;
// cout<<"How Many Student Details? ";
// cin>>n; 
// for(int i=0; i<n; i++)
// {
// cout<<"Enter Name of the Student: ";
// cin>>sec[i].name;
// cout<<"Enter Roll Number: ";
// cin>>sec[i].roll;
// cout<<"Enter Branch: ";
// cin>>sec[i].branch;
// cout<<"Enter the Total Marks: ";
// cin>>sec[i].tmarks;
// }
// cout<<n<<" Student Details\n";
// for(int i=0; i<n; i++)
// {
// cout<<"\nName = "<<sec[i].name;
// cout<<"\nRoll Number = "<<sec[i].roll;
// cout<<"\nBranch = "<<sec[i].branch;
// cout<<"\nTotal Marks = "<<sec[i].tmarks;
// }
// }
// #include<iostream>
// using namespace std;

// int sum (int p = 0, int q = 1, int r = 2)
// {
// return p+q+r;
// }
// int main( )
// {
// int r1 = sum(4, 6, 10);
// int r2 = sum(10, 6);
// int r3 = sum(7);
// int r4 = sum( );
// cout<<"Result-1="<<r1<<endl;
// cout<<"Result-2="<<r2<<endl;
// cout<<"Result-3="<<r3<<endl;
// cout<<"Result-4="<<r4<<endl;
// }

#include<iostream>
using namespace std;
int main(){
int arr,n,*par;
cin>>n;
par =new int[n];
for(int i=0;i<n;i++){
    cin>>par[i];
}for(int j=0;j<n;j++){
    cout<<*(par+j)<<endl;
}
delete par;
}