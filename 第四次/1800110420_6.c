#include<stdio.h>
int main()
{
    int n,sum,t;
    t=1;
    sum=0;
    for(n=1;n<=20;n++)
    {t=t*n;
    sum=sum+t;
    printf("n=%d,sum=%d\n",n,sum);
    }
    printf("%d\n",sum);
    return 0;
}