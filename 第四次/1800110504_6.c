#include<stdio.h>
int main()
{
    float a,b,s,sum;
    sum=0;
    for(a=1; a<=20; a++)
    {
        for(s=1,b=1; b<=a; b++)
            s=s*b;
        sum=sum+s;
    }
    printf("%f\n",sum);
}