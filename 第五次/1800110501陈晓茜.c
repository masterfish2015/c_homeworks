#include<stdio.h>

int main()
{
    int a[15];
    int i,j,t;
    printf("input 15 number:\n");
    for(i=0;i<15;i++)
      scanf("%d",&a[i]);
    printf("\n");
    for(j=0;j<14;j++)
    for(i=0;i<14-j;i++)
      if(a[i]>a[i+1])
    {t=a[i];a[i]=a[i+1];a[i+1]=t;
    }
    printf("the sorted numbers:\n");
    for(i=0;i<15;i++)
    printf("%d",a[i]);
    printf("\n");
    return 0;
}