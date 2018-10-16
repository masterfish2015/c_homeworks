#include<stdio.h>

int main()
{   
    double a,b,c,d,e,r,h;
    r=1.5,h=3;
    a=2*3.14*r;
    b=3.14*r*r;
    c=4*3.14*r*r;
    d=(4*3.14*r*r*r)/3;
    e=3.14*r*r*h;
    printf("yuan de zhou chang a=%7.2f\n",a);
    printf("yuan de mian ji b=%8.2f\n",b);
    printf("yuan qiu de biao mian ji c=%9.2f\n",c);
    printf("yuan qiu de ti ji d=%10.2f\n",d);
    printf("yuan zhu de ti ji e=%11.2f\n",e);
    return 0;
}