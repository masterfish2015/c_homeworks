#include<stdio.h>
int main() 
{
	float PI,r,l,s1,s2,v1,v2;
	//定义浮点型变量
    scanf("%f",&r);
	PI=3.14;
	//给变量赋值
    
	r=1.5;
	int h;
    scanf("%d",&h);
    h=3;
	//定义整型变量并给变量赋值
	l=2*PI*r;
	//计算圆的周长
	s1=PI*r*r;
	//计算圆的面积
	v1=4.00/3*PI*r*r*r;
	//计算球的体积
	s2=4*PI*r*r;
	//计算球的表面积
	v2=s1*h;
	//计算圆柱的体积
	printf("圆周长l=%.2f;圆面积s1=%.2f\n",l,s1);
	printf("球体积v1=%.2f;球表面积s2=%.2f\n",v1,s2);
	printf("圆柱体积v2=%.2f\n",v2);
	return 0;
}
