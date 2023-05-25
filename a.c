#include <stdio.h>
#include <math.h>
int main()
{
    int temp,i;
    int dec,k=0;
    int arr[500];
    int bin;       //decimal to binary
    printf("ENTER A DECIMAL NO: \n");
    scanf("%d",&dec);
    while(dec !=0)
    {
        if(dec%2==0)
        arr[k]=0;
        else
        arr[k]=1;
        k++;
        dec=dec/2;
    }
    for(i=k-1;i>=0;i--)
    printf("%d",arr[i]);
}