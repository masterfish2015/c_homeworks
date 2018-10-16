#include<stdio.h>
int main()
{
  double r,h,c,s1,s2,v1,v2;
  scanf("%lf%lf",&r,&h);
  r=1.5;
  h=3;
  c=2.0*3.14*r;
  s1=3.14*r*r;
  s2=4.0*3.14*r*r;
  v1=4/3*3.14*r*r*r;
  v2=3.14*h*r*r;
  printf("yuanzhouchang=%.2f\nyuanmianji=%.2f\nyuanqiubiaomianji=%.2f\nyuantiji=%.2f\nyuanzhutiji%.2f\n",c,s1,s2,v1,v2);
  return 0;    
}