#include<stdio.h>
int main()
{double r,h,p,l,s1,s2,v1,v2;
 scanf("%lf%lf%lf",&r,&h,&p);
 r=1.5;
 h=3;
 p=3.14;
 l=2.0*p*r;
 s1=p*r*r;
 s2=4.0*p*r*r;
 v1=4/3*p*r*r*r;
 v2=p*h*r*r;
 printf("zhouchang=%.2f\nmianji=%.2f\nbiaomianji=%.2f\nqiutiji=%.2f\nzhutiji=%.2f\n",l,s1,s2,v1,v2);
 return 0;
}