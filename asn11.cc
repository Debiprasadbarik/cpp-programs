/*[1] Write a C++ program to display all Strong Numbers within a range of 
numbers. using oops method and friend function method*/
#include<iostream>
using namespace std;
class strong{
    private:
    int no;
    public:
    void assign(int p){
        no=p;
    }
    int fact(int n)
    {
        int f=1;
        for(int i=1;i<=n;i++){
            f=f*i;
        }
        return f;
    }
    int check(int p)
    {
        int rem,sum=0;
        while(p){
            rem=p%10;
            sum=sum+fact(rem);
            p=p/10;
        }
        return sum;
    }
    friend void verify(strong obj){
      
        for(int i=1;i<=obj.no;i++){
        if(obj.check(i)==i)
         cout<<i<<" ";}
    }
};
int main(){
    strong ob;
  int num;
  cout<<"enter a range:"<<endl;
  cin>>num;
  ob.assign(num);
  verify(ob);
}
