#include<stdio.h>

int main()
   
{
    int n=1,sum=0;
    while(n<=20)
    {
      sum=n*n+sum;
      n++;
    }
    printf("sum=%d\n",sum);
    return 0;
}