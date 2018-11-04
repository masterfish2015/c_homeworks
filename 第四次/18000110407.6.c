#include<stdio.h>
int main()
{
double i=1,s=0;
int n;
for(n=1;n<=20;n++)
{
 i=n*i;
 s=s+i;
}
 printf("=%22.15e\n",s);
return 0;
}