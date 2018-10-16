#include<stdio.h>
int main()
{
    double r,h,C,S1,S2,V1,V2;
    scanf("%f,%f",&r,&h);
    r=1.5;
    h=3;
    C=2*3.14*r;
    S1=3.14*r*r;
    S2=4*3.14*r*r;
    V1=4/3*3.14*r*r*r;
    V2=3.14*r*r;
    printf("zhouchang%.2f\n,yuanmianji%.2f\n,yuanqiubiaomianji%.2f\n,yuanqiu%.2f\n,yuanzhu%.2f\n",C,S1,S2,V1,V2);
    return 0;
}