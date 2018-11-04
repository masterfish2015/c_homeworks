#include<stdio.h>
int main()
{
 int n,s=1,sum=1;
 for(n=2; n<=20; n++)
   {s=s*n;
    sum=sum+s;
   }
  printf("sum=%d\n",sum);
  return 0;
}