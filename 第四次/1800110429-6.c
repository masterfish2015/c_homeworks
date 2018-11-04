#include<stdio.h>

int main()
{   int n,a,sum;
    for(n=1,a=1,sum=0;n<=20;n++)
    { a=a*n;
    sum=sum+a;
    
    }
    printf("%d\n",sum);
    return 0;
}