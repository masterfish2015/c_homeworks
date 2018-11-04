#include<stdio.h>

int main()
{
    double i,n,m;
    m=1.0;
    n=0.0;
    for(i=1.0;i<=20.0;i++)
    {
    m=m*i;
    n=n+m;
    }
    printf("%lf",n);
    return 0;
}