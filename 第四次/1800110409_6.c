#include<stdio.h>
int main()
{
  int n=1,t=0,s=1;
  do
   {
    s=s*n;
    t=t+s;
    n++;
   }while(n<=20);
 printf("%d",t);
 return 0;
}
 