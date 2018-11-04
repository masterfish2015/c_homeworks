#include<stdio.h>

int main()
{
  int a,b,s,sum;
  for(a=1;a<=20;a++)
   {
      for(s=1,b=1;b<=a;b++)
     s=s*b;
     sum=sum+s;
    }

    printf("%d\n",sum);
    return 0;
}