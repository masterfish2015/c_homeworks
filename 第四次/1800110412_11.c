
#include<stdio.h>

int main()
{  
    double i=0,sum=100,n=100;
    while(i<10)
    {
      n=n/2;
      sum=sum+n;
      i++;
     }
    printf("sum=%9.8f\nn=%9.8f\n",sum,n);
    return 0;
}


















