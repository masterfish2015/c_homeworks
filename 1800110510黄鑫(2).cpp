#include<stdio.h> 
int main ()
{
	#define pi 3.14
	float c1,c2,c3,c4,c5,r,h;
	printf("yuandebanjin r=");
	scanf("%f",&r);
printf("yusnzhugao h=");
	scanf("%f",&h);
	c1=pi*2*r;
	c2=pi*r*r;
	c3=4*pi*r*r;
	c4=(double)4/3*pi*r*r*r;
	c5=pi*r*r*h;
	printf("yuanzhouchang=%.2f\nyuanmianji=%.2f\nyuanqiubiaomianji=%.2f\nyuanqiutiji=%.2f\nyuanzhutiji=%.2f\n",c1,c2,c3,c4,c5);
	return 0;
}
