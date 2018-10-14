#include<stdio.h>
int main()
{float r,h,a,b,s,v,e;
#define PI 3.14
 printf("circle radius:r=");
 scanf("%f",&r);
 printf("cylinder height:h=");
 scanf("%f",&h);
 a=2*r*PI;
 b=r*r*PI;
 s=4*b;
 v=(float)4/3*r*b;
 e=h*b;
 printf("circumference:%.2f,circular area:%.2f,sphere surface:%.2f,sphere volume:%.2f,cylindrical volume:%.2f\n",a,b,s,v,e);
 return 0;
}