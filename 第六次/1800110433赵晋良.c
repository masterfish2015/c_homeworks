#include<stdio.h>

int main()
{
    int a[6];
    int i,j,t;
    printf("输入6个数:\n");
    for(i=0; i<6; i++)
        scanf("%d",&a[i]);
    printf("\n");
    for(j=0; j<5; j++)
        for(i=0;i<5-j;i++)
            if(a[i]>a[i+1])
            {
                t=a[i];
                a[i]=a[i+1];
                a[i+1]=t;
            }
    printf("thr sortsd numbers:\n");
    for(i=0;i<6;i++)
    printf("%d",a[i]);
    printf("\n");
    return 0;
}