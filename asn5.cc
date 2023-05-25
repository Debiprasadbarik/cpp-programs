/*[5] Write a C++ program to add and subtract two times using object as 
argument in a member function.*/
#include<iostream>
using namespace std;
class addsub{
    private:
    int hr,min,sec;
    public:
    void assign(int a,int b,int c){
        hr=a;
        min=b;
        sec=c;
    }
    void display(){
        cout<<" time: "<<hr<<" : "<<min<<" : "<<sec<<endl;
    }
    void add(addsub a1, addsub a2){
        sec=a1.sec+a2.sec;
        min=a1.min+a2.min+(sec/60);
        hr=a1.hr+a2.hr+(min/60);
        min=min%60;
        sec=sec%60;
    }
    void diff(addsub a1, addsub a2){
        if(a2.sec>a1.sec){
            --a1.min;
            a1.sec=a1.sec+60;}
            sec=a1.sec-a2.sec;
        if(a2.min>a1.min){
            --a1.hr;
            a1.min=a1.min+60;
        }
        min=a1.min-a2.min;
        hr=a1.hr-a2.hr;
    }
    };
int main(){
    addsub obj1,obj2,obj3,obj4;
    int h1,m1,s1,h2,m2,s2;
    cout<<"enter time:"<<endl;
    cin>>h1>>m1>>s1;
    cout<<"enter another time:"<<endl;
    cin>>h2>>m2>>s2;
    obj1.assign(h1,m1,s1);
    obj2.assign(h2,m2,s2);
    obj3.add(obj1,obj2);
    obj4.diff(obj1,obj2);
    obj1.display();//1st input time
    obj2.display();//2nd input time
    obj3.display();//addition value
    obj4.display();//subtraction value
}