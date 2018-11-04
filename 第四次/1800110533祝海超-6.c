#include<stdio.h>

int main()
{
  double sum=0,t=1,n;
for(n=1;n<=20;n++)
{
t*=n;
sum+=t;
}
printf("sum=%0.0f\n",sum);
}