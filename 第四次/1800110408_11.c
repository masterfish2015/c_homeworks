#include<stdio.h>

int main()
{
   double i=0,sum=0,n=100;
   while(i<10)
   {
   n=n/2;
   sum=sum+n;
   i++;
   }
   sum=2*sum+100;
   n=n/2;
   printf("sum=%-9.8f\nn=%-9.8f\n",sum,n);
   return 0;
}