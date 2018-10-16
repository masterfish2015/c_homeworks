#include <stdio.h>
int main()
{
    float r,h,s,c,s1,v1,v2;
    scanf("%f%f",&r,&h);
    c=3.14*2*r;
    s=3.14*r*r;
    s1=4*3.14*r*r;
    v1=3.14*r*r*r*4/3;
    v2=h*3.14*r*r;
    printf("yuanzhouchang=%.2fyuanminji=%.2fyuanqioubiaomianji=%.2fyuanqioutiji=%.2fyuanzhutiji=%.2f",c,s,s1,v1,v2);
    return 0;
}