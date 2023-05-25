#include <stdio.h>
int arraytest(int a[])
{
	a[0]=a[0]+a[1];
	a[1]=a[0]-a[1];
	a[0]=a[0]-a[1];
}
int main()
{
	int arr[]={1,2};
	printf("%d\t%d",arr[0],arr[1]);
	arraytest(arr);
	printf("\n after calling for arr contains:%d\t%d",arr[0],arr[1]);
}
