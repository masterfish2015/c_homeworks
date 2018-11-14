#include<stdio.h>

int main()
{
 int a[10][10],n,m;
  for(n=0;n<10;n++)
  {
   a[n][0]=1;
   a[n][n]=1;
   }
  for(n=2;n<10;n++)
  {
   for(m=1;m<n;m++)
   a[n][m]=a[n-1][m-1]+a[n-1][m];
  }
   for(n=0;n<10;n++)
    {
    for(m=0;m<n+1;m++)
    printf("%5d",a[n][m]);
    printf("\n");
    }
    return 0;
}