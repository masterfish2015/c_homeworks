#include<stdio.h>

int main()
{   float a,b,c,d;
    a=100.00,b=0;
    for(c=1;c<=10;c++)
  { a=a/2;
    d=d+a;}
    printf("%lf\n%lf\n",a,d);
    return 0;
}