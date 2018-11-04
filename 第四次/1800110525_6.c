#include<stdio.h>
int main()
{
double i,sum=1,n=0;
for(i=1;i<=20;i++)
{sum=i*sum;
n=n+sum;
}
printf("%lf",n);
return 0;
}