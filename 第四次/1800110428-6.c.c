#include<stdio.h>
int main()
{
    int i=1;
    double sum=1, x=1;
	do
      {
       x*=i;
	   sum+=x;
       i++;
    } while(i<=20);
  printf("%lf", sum);
  return 0;
}