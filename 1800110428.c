#include <stdio.h>
#define PI 3.1415926

void main()
{
	//输入圆半径和圆柱高
	float r;
	scanf("%f", &r);
	int h;
	scanf("%d", &h);
	printf("圆半径 r = %.1f，圆柱高 h = %d\n", r, h);
	
	printf("圆周长为 		%.2f\n", 2*PI*r);
	printf("圆面积为 		%.2f\n", PI*r*r);
	printf("圆球表面积为 	%.2f\n", 4*PI*r*r);
	printf("圆球体积为 		%.2f\n", 4/3*PI*r*r*r);
	printf("圆柱体积为 		%.2f\n", PI*r*r*h);
}