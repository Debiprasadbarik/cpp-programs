#include <stdio.h>
int add(int num1, int num2)
{
	if(!num1)
	return num2;
	else
	return add((num1 & num2)<<1,num1^num2);
}
int main()
{
	int num1,num2;
	printf("enter  nos:");
	scanf("%d%d",&num1,&num2);
	printf("add two no %d",add(num1,num2));
	return 0;
}
