#include<stdio.h>

int main()
{
    int  i,n,a[10][10];
    for(i=0; i<10; i++)
        a[i][0]=1,a[i][i]=1;
    for (i = 2; i < 10; i++)
        for (n= 1; n <= i - 1; n++)
            a[i][n] = a[i-1][n-1] + a[i-1][n];
    for(i=0; i<10; i++)
    {
        for(n=0; n<=i; n++)
            printf("%3d",a[i][n]);
        printf("\n");
    }
    return 0;
}