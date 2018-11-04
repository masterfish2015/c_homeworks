#include<stdio.h>
int main()
{ int t,i,j;
int a[15]={4,5,8,13,2,6,19,
62,31,27,32,36,21,14,13};
for(j=0;j<15;j++)
for(i=0;i<15-j;i++)
if(a[i]>a[i+1])
{t=a[i];a[i]=a[i+1];a[i+1]=t;}
for(i=0;i<15;i++)
printf("%4d",a[i]);
printf("\n");
return 0;
}

   