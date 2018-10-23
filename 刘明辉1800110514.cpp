#include<stdio.h>
int main()
{
	float r,h,l,v1,v2,s1,s2,p=3.14;
	printf("yuandebanjing r£»\n");
	scanf("%f",&r);
	printf("yuanzhudegao h£»\n");
	scanf("%f",&h);
	printf("yuanzhudezhouchan g£»%7.2f\n",l=2*p*r);
	printf("yuandemianji£»%7.2f\n",s1=p*r*r);
	printf("qiudebiaomianji£»%7.2f\n",s2=4*r*p*r);
	printf("qiudetiji£»%7.2f\n",v1=(float)4/3*p*r*r*r);
	printf("yuanzhudetiji£»%7.2f\n",v2=p*r*r*h);
	return 0;	
 } 
