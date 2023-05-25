#include<iostream>
#include<cstdio>
using namespace std;
bool prime(int a)
{
    for(int i=2;i<a;i++)
    {
        if(a%i==0)
        return false;
    }return true;}
int main(){
    int t,nop=0,count=1;
    scanf("%d",&t);
    while(t>1){
        for(int j=2;j<=t;j++){
            if(prime(j))
            nop++;}
        t=t-nop;
        count++;
        nop=0;}
   printf("%d",count);
    return 0;}