#include <stdio.h>
int main()
{
	int r,c,n;
	printf("how many rows you wanna print: ");
	scanf("%d",&n);
	for(r=1;r<=n;r++)
	{
		for(c=1;c<=r;c++)
		{
			printf("%d",c);
		}
		printf("\n");
	}
	return 0;
}
