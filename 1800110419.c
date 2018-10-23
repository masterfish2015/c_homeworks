#
#include<stdio.h>

int main()

{

float pi,h,r,l,s,sq,vq,vz;

pi=3.141526;

printf("请输入圆半径r,圆锥高h;\n");

scanf("%f,%f",&r,&h);

l=2*pi*r;

s=pi*r*r;

sq=4*pi*r*r;

vq=4.0/3.0*pi*r*r*r;

vz=pi*r*r*h;

printf("圆周长为:l=%6.2f\n",l);

printf("圆面积为:s=%6.2f\n",s);

printf("圆球面积为:sq=%6.2f\n",sq);

printf("圆球体积为:sv=%6.2f\n",vq);

printf("圆柱体积为:sz=%6.2f\n",vz);

}

