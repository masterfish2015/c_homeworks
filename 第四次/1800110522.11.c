#include<stdio.h>

int main()
{
int n,m,s,b;
m=0;
n=100;
s=0;
scanf("%f%f%f",&m,&n,&s);
if(s>=10)
printf("\n");
else
m=m+n/2;
b=n/2;
s=s+1;
    printf("%0.9f",b,m);
    return 0;
}