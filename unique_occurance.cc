#include<iostream>
using namespace std;
class unique{
    int arr[1000];
    int freq[1000];
    public:
    void input(){
        cout<<"enter no:";
        while(true){
            int i=0;
            cin>>arr[i];
            i++;}}
    void show(){
        int j=0;
        while(true){
            cout<<arr[j];
            j++;
        }
    }
};
int main(){
    unique obj;
    obj.input();
    obj.show();

}