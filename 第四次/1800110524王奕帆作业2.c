#include<stdio.h>

int main()
{
    double i,x,h=100,sum=100;
    for(i=1;i<=9;i++)
    {
    sum=sum+2*x;
    h=h/2;
    x=h;
    }
    printf("h=%l.4f\n",h);
    printf("x=%l.4f\n",x);
    return 0;
}