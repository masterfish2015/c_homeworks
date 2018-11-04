#include<stdio.h>
int main()
{
    double s = 100, h=s/2;
    int n;
    for(n = 1; n < 10; n++)
    {
        s=s+h;
        h=h/2;
    }
    printf("%lf, %lf\n", s, h);
    
    return 0;
}