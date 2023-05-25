#include <iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"how many: "<<"\n";
    cin>>n;
    int arr[n];
    cout<<"enter element: ";
    for(i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    int lar=arr[0];
    for(i=1;i<=n;i++)
    {
        if(arr[i]>lar)
        {
            lar=arr[i];
        }
    }
    cout<<"largest element: "<<lar;













    return 0;
}