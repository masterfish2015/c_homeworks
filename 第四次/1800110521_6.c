#include<stdio.h>

int main()
  { double a,b,sum;
    b=1,sum=0;
    for(a=1;a<=20;a++) 
   {b=b*a;  
    sum=sum+b;} 
    printf("%lf\n",sum);
    return 0;
}