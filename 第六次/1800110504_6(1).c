#include<stdio.h>
int main()
{
int a[11][11],i,j;
a[0][0]=1;
for(i=1;i<10;i++)
for(j=1;j<=i;j++)
{
a[i][i]=1,a[i][0]=1;
a[i+1][j]=a[i][j-1]+a[i][j];
}
for(i=0;i<10;i++)
for(j=0;j<=i;j++)
{
printf("%d ",a[i][j]);
if(i==j)
printf("\n");
}
return 0;
}