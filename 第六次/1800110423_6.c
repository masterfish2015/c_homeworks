#include <stdio.h>
main()
{
int i,j,a[10][10];
for(i=0;i<10;i++) 
{
a[i][0]=1;
a[i][i]=1;
}
for(i=2;i<10;i++) 
for(j=1;j<i;j++)
a[i][j]=a[i-1][j-1]+a[i-1][j];
for(i=0;i<10;i++)
{
for(j=0;j<i+1;j++)
printf("%d ",a[i][j]);
printf("\n");
}
}