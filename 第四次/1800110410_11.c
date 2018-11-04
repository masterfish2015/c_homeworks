#include<stdio.h>

int main()
{
    int s=100;
    double h=1*s/2;
    int i;
    for(i=2;i<=10;i++)
    {
    s=s+2*h;
    h=1*h/2;
    }
    printf("%d\n%lf\n",s,h);
    return 0;
}