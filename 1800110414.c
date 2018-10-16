#include <stdio.h>
#define pi 3.14159
main()
{
 double L,S1,S2,Va,Vb;/*L是圆周长，S1是圆面积，S2是圆球表面积，Va是圆球体积，Vb是圆柱体积*/
 float r,h;
 printf("r=");
 scanf("%f",&r);
 printf("h=");
 scanf("%f",&h);
 printf("L=%f\n",L=2*pi*r);
 printf("S1=%f\n",S1=pi*r*r);
 printf("Va=%f\n",Va=4/3*pi*r*r*r);
 printf("S2=%f\n",S2=4*pi*r*r);
 printf("Vb=%f\n",Vb=pi*r*r*h);
 }