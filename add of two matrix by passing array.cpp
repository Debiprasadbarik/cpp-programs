#include <stdio.h>
int displaynum(int num[2][2]);
int main()
{
	int i,j,num[2][2];
	printf("enter 4 no:\n");
	for(i=0;i<2;++i)
	for(j=0;j<2;++j)
	scanf("%d",&num[i][j]);
	displaynum(num);
	return 0;
}
int displaynum(int num[2][2])
{
	printf("displaying:\n");
	for(int i=0;i<2;++i)
	{
		for(int j=0;j<2;++j)
	
{
		printf("%d\n",num[i][j]);}
}
}
