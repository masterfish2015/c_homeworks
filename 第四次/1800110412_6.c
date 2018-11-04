#include<stdio.h>

int main()
   
{
    double n=1,sum=0,s=1;
    while(n<=20)
    {
      s=s*n;
      sum=s+sum;
      n++;
    }
    printf("sum=%lf\n",sum);
    return 0;
}

















