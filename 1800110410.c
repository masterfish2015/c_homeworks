#include<stdio.h>

int main()
{
     double r,h,s1,s2,s3,s4,s5;
    scanf("%if%if,&r,&h");
    r=1.5;
    h=3;
    s1=2*3.14*r;
    s2=3.14*r*r;
    s3=4*3.14*r*r;
    s4=4/3*3.14*r*r*r;
    s5=3.14*r*r*h;
    printf("yuanzhouchang%.2f\n yuanmianji%.2f\n yuanqiubiaomianji%.2f\n yuanqiutiji%.2f\n yuanzhutiji%.2f\n",s1,s2,s3,s4,s5);
    return 0;
}