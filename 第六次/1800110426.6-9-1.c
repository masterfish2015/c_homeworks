#include<stdio.h>
int main()
{
    int i,t,j;
    int a[15]= {4,5,8,13,2,6,19,62,31,27,32,36,21,14,13};
    for(j=1; j<=15; j++)
        for(i=0; i<=14-j; i++)
            if(a[i]>a[i+1]) {
                t=a[i];
                a[i]=a[i+1];
                a[i+1]=t;
            }
    for(i=0; i<=14; i++)
        printf(" %d",a[i]);
    return 0;
}