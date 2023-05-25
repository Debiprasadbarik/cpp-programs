// [2] Write a program to print the area and perimeter of a triangle by 
// creating a class named 'Triangle' with functions to input three sides and
// print the area and perimeter.
#include<iostream>
#include<math.h>
using namespace std;
class Triangle
{
    private:
    float s,s1,s2,s3,peri,area;
    public:
    void input()
    {
        cout<<"enter 3 sides of a triangle:"<<endl;
        cin>>s1>>s2>>s3;
    }
    void find_area()
    {
        s=(s1+s2+s3)/2;
        area= sqrt(s*(s-s1)*(s-s2)*(s-s3));
    }
    void find_perimeter()
    {
        peri=s1+s2+s3;
    }
    void display()
    {
        cout<<"area of triangle is:"<<area<<endl;
        cout<<"perimeter of triangle is:"<<peri<<endl;
    }
};
int main()
{
    Triangle obj;
    obj.input();
    obj.find_area();
    obj.find_perimeter();
    obj.display();
}