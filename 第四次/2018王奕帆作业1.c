#include<stdio.h>
int main()
{
float n,s;
int i;
s=0,n=1;
for(i=1;i<=20;i++)
{n=i*n;
s=s+n;
}
printf("s=%l.6f",s);
return 0;}