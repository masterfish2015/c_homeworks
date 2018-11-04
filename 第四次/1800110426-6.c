#include<stdio.h>
int main()
{
    int i,s,a;
    for(i=2,s=1,a=1; i<=20; i++)
    {   a=a*i;
        s=s+a;
    }
    printf("%d\n",s);
    return 0;
}