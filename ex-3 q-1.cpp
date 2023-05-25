/*c program to create,initialize,assign and acess a pointer variable*/
/*program by Debi prasad*/
#include <stdio.h>
int main()
{
	int d=18;
	int*p;
	p=&d;
	printf("using variable 'd':\n");
	printf("value of d=%d\naddress value of d=%u\n",d,&d);
	printf("using pointer variable:\n");
	printf("value of d: %d\naddress of d:%u\n",*p,p);
	return 0;
 } 
