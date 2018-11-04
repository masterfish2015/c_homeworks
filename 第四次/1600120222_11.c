#include<stdio.h>
int main(){
int i;
float s=100,sum=0;
for(i=2;i<=10;i++)
{
sum=sum+2*s;
s=s/2;
}
printf("第10次反弹的高度=%f\n",s);
printf("sum=%f\n",sum);
return 0;
}
