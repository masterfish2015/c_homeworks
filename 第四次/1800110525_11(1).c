#include<stdio.h>

int main()
{
    double i,x,h=100,sum=100;
    for(i=1;i<=10;i++)
    {
    sum=sum+2*x;
    h=h/2;
    x=h;
    }
    printf("%lf,%lf",h,sum);
    return 0;
}