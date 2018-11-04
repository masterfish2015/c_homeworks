#include<stdio.h>

int main()
{   double n,i,sum;
    for(n=100,i=1,sum=0;i<=10;i++)
    {
    sum=sum+n;
    n=n/2;
    }
    printf("sum=%lf\n,n=%lf\n",sum,n);
    return 0;
}