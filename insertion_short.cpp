//insertion sort program
#include<iostream>
using namespace std;

void insertion(int arr[], int n){
    for(int i=1;i<n;i++){
        int k = arr[i];
        int j=i-1;

        while(k <arr[j] && j>=0){
            arr[j+1]= arr[j];
            j--;
        }
        arr[j+1]=k;
    }
}
void printy(int array[],int size){
    for(int i=0;i<size;i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int ar[]={9,2,5,1,4};
    int size = sizeof(ar)/sizeof(ar[0]);
    insertion(ar,size);
    cout<<"sorted array in ascending order:\n";
    printy(ar,size);
}