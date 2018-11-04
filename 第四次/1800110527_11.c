#include<stdio.h>
int main()
{double n,h=100.0,sum=100.0;
 for(n=2.0;n<=10.0;n++)
   {h=h/2.0;
    sum=sum+2.0*h;
   }
  printf("gongjinguo=%.2lf\ndi10cifantan=%.2lf\n",sum,h);
  return 0;
}