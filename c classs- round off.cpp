#include <stdio.h>
using namespace std;
int main()
{
	float round(float var);
	int n;
	float value = (int)(var*100+.5);
	printf("how many decimal places:");
	scanf("%d",&n);
	return(float)value/100;
}
