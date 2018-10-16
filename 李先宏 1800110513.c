#include<stdio.h>
int main()
   { 
   double  c1,c2,c3,c4,c5,r=1.5,h=3;
   scanf("%lf%lf%lf%lf%lf",&c1,&c2,&c3,&c4,&c5);
   c1=3.14*2*r;
   c2=3.14*r*r;
   c3=4*3.14*r*r;
   c4=(double)4/3*3.14*r*r*r;
   c5=3.14*r*r*h; 
   printf("yuanzhouchang:%.2f\nyuanmianji:%.2f\nyuanqiubiaomianji:%.2f\nyuanqiutiji:%.2f\nyuanzhutiji:%.2f\n",c1,c2,c3,c4,c5);
   return 0;
    }

