#include "stdio.h"
int main()
{
	int a,b;
	printf(" enter value of a:");
	scanf("%d",&a);
	printf("\nenter value of b:");
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\nswap value of a:%d\nswap value of b:%d",a,b);
	return 0;
}
