#include<stdio.h>
int main()
{
 double r,h,c,s1,s2,v1,v2;
 scanf("%lf%lf",&r,&h);
 r=1.5;
 h=3.0;
 c=2.0*r*3.14;
 s1=3.14*r*r;
 s2=4.0*3.14*r*r;
 v1=4.0/3*3.14*r*r*r;
 v2=3.14*r*r*h;
 printf("yuanzouchang=%.2f\n yuanmianji=%.2f\n yuanqiubiaomianji=%.2f\n yuanqiutiji=%.2f\n yuanzhutiji=%.2f\n",c,s1,s2,v1,v2);
 return 0;
}