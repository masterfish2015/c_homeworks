#include<stdio.h>
int main()
{
    float i,a,l,s;
    for(i=1,s=100,l=100; i<=10; i++)
    {   a=s/2;
        s=a;
        l=l+a*2;
    }
    printf("a=%f\nl=%f\n",a,l);
    return 0;
}