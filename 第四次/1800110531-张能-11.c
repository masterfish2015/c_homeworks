#include<stdio.h>
int main()
{double l,h=100.0,sum=0.0;
 for(l=2.0;l<=20.0;l=l+2)
   {h=h/2.0;
    sum=sum+2.0*h;
   }
  printf("gongjingguo=%.6lf\ndishicifantan=%.6lf\n",sum,h);
  return 0;
}