#include<stdio.h>
#include<stdio.h>

int main()
{  
    double i=0,sum=0,n=100;
    while(i<10)
    {
      n=n/2;
      sum=sum+n;
      i++;
     }
    sum=sum*2+100;
    printf("sum=%f\nn=%f\n",sum,n);
    return 0;
}