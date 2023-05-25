#include<stdio.h>
int main()
{
    int num,sum=0,i;
    for(i=1;i<=10;i++)
    {
        sum=sum+(i*8);
    }
    printf("%d",sum);
}