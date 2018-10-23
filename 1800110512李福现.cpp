#include<stdio.h>
int main()
{
	#define PI 3.14169
	float r,h,l,s,t,v1,v2;
	float x=4.0/3;
	printf("r=");
	scanf("%f",&r);
	printf("h=");
	scanf("%f",&h);
	l=2*PI*r;
	s=PI*r*r;
	t=4*PI*r*r;
	v1=x*PI*r*r*r;
	v2=PI*r*r*h;
	printf("l=%.2f\n",l);
	printf("s=%.2f\n",s);
	printf("t=%.2f\n",t);
	printf("v1=%.2f\n",v1);
	printf("v2=%.2f\n",v2);
	return 0;
}
