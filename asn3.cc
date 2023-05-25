// [3] Write a program to print the area of a rectangle by creating a class 
// named 'Rectangle' having two functions. First function named as
// 'Assign' takes the length and breadth of the rectangle as parameters 
// and the second function named as 'Area' returns the area of the 
// rectangle.
#include<iostream>
#include<math.h>
using namespace std;
class Rectangle
{
    private:
    float length,breadth,area;
    public:
    void assign(float l, float m)
    {
        length=l;
        breadth=m;
    }
    float find_area()
    {
        area=length*breadth;
        return area;
    }
};
int main()
{
    Rectangle obj;
    float len,brth,result;
    cout<<"enter the length of rectangle:"<<endl;
    cin>>len;
    cout<<"enter the breadth of rectangle:"<<endl;
    cin>>brth;
    obj.assign(len,brth);
    result=obj.find_area();
    cout<<"area is:"<<result<<endl;
}