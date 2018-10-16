#include <stdio.h>
int main()
{
    float l,s1,s2,v1,v2,r,h,p=3.14;
    scanf("%f,%f",&r,&h);
    l=2*p*r;
    s1=p*r*r;
    s2=4*p*r*r;
    v1=p*r*r*r*4/3;
    v2=p*r*r*h;
    printf("l=%7.2f\n",l);
    printf("s1=%7.2f\n",s1);
    printf("s2=%7.2f\n",s2);
    printf("v1=%7.2f\n",v1);
    printf("v2=%7.2f\n",v2);
    return 0;
}