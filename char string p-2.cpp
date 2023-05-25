#include <stdio.h>
int main()
{
	char country[15]={"united "};
	printf("*123456789012345*\n");  //1
	printf("----------------\n");   //2
	printf("%8sa\n",country); //3
	printf("%5sa\n",country);   //4
	printf("%15.6sa\n",country);  //5
	printf("%-15.6sa\n",country);  //6
	printf("%15.2sa\n",country);  //7
	printf("%-10.3sa\n",country);   //8
	printf("-----------------\n");  //9
	return 0;
}
