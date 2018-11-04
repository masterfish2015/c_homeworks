#include<stdio.h>
int main()
{  
    double n=0,s=100,t=0;
    while(n<10)
    {
      s=s/2;
      t=t+s;
      n++;
     }
    printf("sum=%9.8f\nn=%9.8f\n",t,s);
    return 0;
}