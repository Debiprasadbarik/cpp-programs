#include<iostream>
using namespace std;
int a[100],n;
int max(int a[],int k, int n)
{
    int loc,i,max;
    max=a[k];
    loc=k;
    for(i=k+1;i<=n-1;i++)
    if(max<a[i])
    {
        max=a[i];
        loc=i;
    }
    return(loc);
}

void insertion_sort(int a[], int n)
{
    int pass, k,temp,i;
    for(pass=1;pass<n;pass++)
    {
        k=a[pass];
        for(i=pass-1;i>=0 && k>a[i];i--)
        a[i+1]=a[i];
        a[i+1]=k;
    }
}

void accept_input()
{
    int i;
    cout<<endl<<"enter the no of elements: "<<endl;
    cin>>n;
    cout<<endl<<"enter the array elements: "<<endl;
    for(i=0;i<n;i++)
    cin>>a[i];
}

void display()
{
    int i;
    cout<<endl<<"the sorted array is: "<<endl;
    for(i=0;i<n;i++)
    cout<<a[i]<<",";
}
int main()
{
    int k,temp,loc,ch;
    while(1)
    {
        cout<<endl<<"sorting techniques"<<endl;
        cout<<endl<<"*******************"<<endl;
        cout<<"1.insertion sort"<<endl;
        cout<<"2.selection sort"<<endl;
        cout<<"3.exit"<<endl;
        cout<<"enter your choice: "<<endl;
        cin>>ch;
        switch(ch)
        {
            case 1: accept_input();
                    insertion_sort(a,n);
                    display();
                    break;
                    case 2:accept_input();
                    for(k=0;k<n;k++)
                    {
                        loc=max(a,k,n);
                        temp=a[k];
                        a[k]=a[loc];
                        a[loc]=temp;
                    }
                    display();
                    break;
                    case 3: exit(0);
        }
    }
    return 0;
}