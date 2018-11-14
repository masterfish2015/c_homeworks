#include<stdio.h>
int main()
{
    int a[15]={4,5,8,13,2,6,19,62,31,27,32,36,21,14,13};
    int i,j,t;
    for(i=0;i<15;i++)
    printf("\n");
    for(j=0;j<14;j++)
    for(i=0;i<14-j;i++)
    if(a[i]>a[i+1])
    {t=a[i];a[i]=a[i+1];a[i+1]=t;}
    for(i=0;i<15;i++)
    printf("%d\n",a[i]);
    printf("\n");
    return 0;
}