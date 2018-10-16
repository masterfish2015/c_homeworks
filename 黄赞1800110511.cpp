#include<stdio.h>
int main()
{
	float x=3.14;
	float r,h,s,l,v,n,m;
	float y=4.0/3; 
	printf("yuanbanjin="); 
	scanf("%f",&r);
	printf("yuanzhugao="); 
	scanf("%f",&h) ;
	l=2*x*r;
	s=2*x*r*r;
	n=4*x*r*r;
	v=y*x*r*r*r;
	m=x*r*r*h;// l圆周长，s圆面积，n圆球面积，v圆体积，m圆柱体积;
	printf("yuanzhouchang=%.2f\n",l);
	printf("yuanmianji=%.2f\n",s);
	printf("yuanqiumianji=%.2f\n",n);
	printf("yuantiji=%.2f\n",v);
	printf("yuanzhutiji=%.2f\n",m);
	return 0;
}
