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
	m=x*r*r*h;// lԲ�ܳ���sԲ�����nԲ�������vԲ�����mԲ�����;
	printf("yuanzhouchang=%.2f\n",l);
	printf("yuanmianji=%.2f\n",s);
	printf("yuanqiumianji=%.2f\n",n);
	printf("yuantiji=%.2f\n",v);
	printf("yuanzhutiji=%.2f\n",m);
	return 0;
}
