#include <stdio.h>
int main()
{
	int a[10],n,i;
	printf("enter the no to convert: ");
	scanf("%d",&n);
	for(i=0;n>0;i++)
	{
		a[i]=n%2;
		n=n/2;
	}
	printf("\n binary of given no is=");
	for(i=i-1;i>=0;i--)
	{
		printf("%d",a[i]);
	}
	return 0;
}
