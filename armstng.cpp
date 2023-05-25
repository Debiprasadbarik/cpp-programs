//armstrong no using friend function
#include<iostream>
using namespace std;
class arm{
    private:
    int st_range,final_range;
    public:
    void assign(int a,int b){
        st_range=a;
        final_range=b;
        }
    int num(int k){
        int count=0,rem;
        while(k){
            if(k>0){
            count++;}
            k=k/10;}
        return count;
        }
    int power(int c,int b){
        int pw=1;
        for(int i=1;i<=b;i++){
            pw=pw*c;}
        return pw;
        }
    int check_sum(int m){    
        int sum=0,rem;
        int b=num(m);
        while(m){
            rem=m%10;
            sum=sum+power(rem,b);
            m=m/10;}
        return sum;
        }
    friend void verify(arm m1){  
        for(int i=m1.st_range;i<=m1.final_range;i++){
            if(i==m1.check_sum(i)){
                cout<<i<<endl;}}
        }
};
int main()
{
    arm obj;
    int s,f;
    cout<<"enter a starting range:"<<endl;
    cin>>s;
    cout<<"enter end range:"<<endl;
    cin>>f;
    obj.assign(s,f);
    verify(obj);
}