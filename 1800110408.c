#include<stdio.h>

int main()
{
    double r,h,p,c,s1,s2,v1,v2;
    r=1.5;
    h=3;
    p=3.14;
    scanf("%lf%lf%lf",&r,&h,&p);
    c=2*p*r;
    s1=p*r*r;
    s2=4*p*r*r;
    v1=4/3*r*r*r;
    v2=p*r*r*h;
    printf("yuanzhouchang=%f\n yuanmanji=%f\n yunqiubiaomanji=%f\n qiutiji=%f\n yuanzhutiji=%f\n",c,
    s1,s2,v1,v2);
    return 0;
}