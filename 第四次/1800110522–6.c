#include<stdio.h>

int main()
{
    int n;
    double sum=1,b=0;
    for(n=1; n<=20; n++)
    {
        sum=n*sum;
        b=b+sum;
    }
    printf("%.0f",b);
    return 0;
}