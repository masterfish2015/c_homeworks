#include <stdio.h>

void main()
{
int i,j,n=0,a[17][17]={0,1};
while(n<1 || n>16)
{ 
printf("请输入杨辉三角形的行数:");
scanf("%d",&n);
}
for(i=1;i<=n;i++)
{ 
for(j=1;j<=i;j++)
{ 
a[i][j]=a[i-1][j-1]+a[i-1][j]; 
printf("%5d",a[i][j]); 
}
printf("\n");
}
}