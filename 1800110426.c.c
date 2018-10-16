#include<stdio.h>
#define PI 3.14
int main()
{
double r=1.5,h=3,c,s,s1,v,v1;
printf("圆周长c=%.2lf\n",2*PI*r);
printf("圆面积s=%.2lf\n",PI*r*r);
printf("圆球面积s1=%.2lf\n",4*PI*r*r);
printf("圆球体积v=%.2lf\n",4.0/3*PI*r*r*r);
printf("圆柱体积v1=%.2lf\n",r*r*PI*h);
return 0;
}
