/*program to swap two numbers using pointer*/
#include "stdio.h"
int main()
{
	int a,b;
	int*i,*j;
	i=&a;
	j=&b;
	printf("enter the value of a: ");
	scanf("%d",&a);
	printf("enter the value of b: ");
	scanf("%d",&b);
	printf("\nswap vaue of a:%d\nswap value of b:%d",*j,*i);
	return 0;
}

