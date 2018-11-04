#include <stdio.h>
int main()
{
int i,j,sum;
for(i=1,j=1,sum=0;i<=20;i++)
{
j=j*i;
sum=sum+j;
}
printf("%d\n",sum);
return 0;
}