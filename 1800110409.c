#include<stdio.h>

int main()
{
 float r,h,c,s,z,v1,v2;
 scanf("%f%f",&r,&h);
 r=1.5;
 h=3;
 c=2*3.14*r;
 s=3.14*r*r;
 z=4*3.14*r*r;
 v1=3.14*r*r*r*4/3;
 v2=3.14*r*r*h;
 printf("c%.2f\n s%.2f\n z%.2f\n v1%.2f\n v2%.2f\n",c,s,z,v1,v2);
 return 0;
}
