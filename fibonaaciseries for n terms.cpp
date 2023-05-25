#include <stdio.h>
void getfibonacci(int a,int b,int n)
{
	int sum;
	if(n>0)
	{
		sum=a+b;
		printf("%d",sum);
		a=b;
		b=sum;
		getfibonacci(a,b,n-1);
	}
}
int main()
{
	int a,b,sum,n;
	int i;
	a=0;
	b=1;
	printf("enter total terms:");
	scanf("%d",&n);
	printf
}
