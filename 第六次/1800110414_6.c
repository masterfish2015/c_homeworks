#include<stdio.h>
main()
{   int i,j,n=10,a[10][10]= {0};
    for(i=0; i<n; i++)
        a[i][0]=1;
    for(i=1; i<n; i++)
        for(j=1; j<=i; j++)
            a[i][j]=a[i-1][j-1]+a[i-1][j];
    for(i=0; i<n; i++)
    {   for(j=0; j<=i; j++)
            printf("%5d",a[i][j]);
        printf("\n");
    }
}