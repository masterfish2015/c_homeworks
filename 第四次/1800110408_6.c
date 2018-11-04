#include<stdio.h>

int main()
{
   long int s,t,i;
   i=1,s=0,t=1;
   while(i<=20)
   {
   t=t*i;
   s=t+s;
   i++;
   }
   printf("%ld",s);
   return 0;
}