#include<stdio.h>
#include<conio.h>
int main()
{
   int n,i;
   float num[100],sum=0.0,avg;
   printf("\nenter the no: ");
   scanf("%d",&n);
   while(n>100||n<1)
   {
       printf("\n error no should be in range of 1 to 100\n");
       printf("\n enter the no again");
       scanf("%d",&n);
   }
   for(i=0;i<n;++i)
   {
       printf("%denter no: ",i+1);
       scanf("%f",&num[i]);
       sum=sum+num[i];
   }
       avg=sum/n;
       printf("\n average=%2f",avg);
       return 0;

}