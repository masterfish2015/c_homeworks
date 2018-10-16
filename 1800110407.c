#include<stdio.h>

int main()
{
    double r,h,c,s1,s2,v,v1;
    scanf("%f,%f,&r,&h");
    r=1.5,h=3;
    c=2*r*3.14;
    s1=r*r*3.14;
    s2=4*3.14*r*r;
    v=4/3*.14*r*r*r;
    v1=3.14*r*r*h;
    printf("yuanzhouchang%.2f\nyuanmianji%.2f\nbiaomianji%.2f\nyuanqiutili%.2f\nyuanzhutili%.2f\n",c,s1,s2,v,v1);
    return 0;
    }