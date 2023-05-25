// [4] Write a program to print the area of two rectangles having sides (5.5,
// 10) and (6, 8) respectively by creating a class named 'Rectangle' with a 
// function named 'Area' that returns the area. The Length and breadth 
// are passed as parameters to its constructor.
#include<iostream>
#include<cmath>
using namespace std;
class Rectangle{
    private:
    float length,breadth,area;
    public:
    float find_area(){
        area=length*breadth;
        return area;}
    Rectangle(float l,float m){
        length=l;
        breadth=m;}
    void show(){
        float res=find_area();
        cout<<"area of length "<<length<<" and breadth "<<breadth<<" rectangle are:"<<res;}};
int main(){
    float len,brth;
    cout<<"enter length:"<<endl;
    cin>>len;
    cout<<"enter breadth:"<<endl;
    cin>>brth;
    Rectangle obj(len,brth);
    obj.show();}