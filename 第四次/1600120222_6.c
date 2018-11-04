#include<stdio.h>
int main(){
int i;
double s=1,sum=0;
for(i=1;i<=20;i++)
{
s=s*i;
sum=sum+s;
}
printf("sum=%6.f\n",sum);
return 0;
}
