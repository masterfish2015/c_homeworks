#include<stdio.h>

int main()
{
    double i,n,m;
    m=100.0;
    n=100.0;
    for(i=1.0;i<=10.0;i++)
    {
    m=m/2.0;
    n=n+m*2;
    }
    printf("经过路程%f\n 第十次反弹高度%f",n,m);
    return 0;
}