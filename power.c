#include <stdio.h>
#include<math.h>
int main()
{
    int n,p,i,temp=1;
    printf("enter no :\n");
    scanf("%d",&n);
    printf("enter the power : \n");
    scanf("%d",&p);
    for(i=1;i<=p;i++)
    temp=temp*n;
    printf("%d",temp);

}