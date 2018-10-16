#include<stdio.h>
#define T 3.14
int main()
{
float r=1.5,h=3,c,s1,s2,v1,v2;
printf("c=%.2f\n",2*T*r);
printf("s1=%.2f\n",T*r*r);
printf("s2=%.2f\n",4*T*r*r);
printf("v1=%.2f\n",4.0/3*T*r*r*r);
printf("v2=%.2f\n",r*r*T*h);
return 0;
}
    