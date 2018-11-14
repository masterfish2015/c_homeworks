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
    printf("\n");
    int b,min,max,mid;
    min=0;
    max=14;
    scanf("%d",&b);
    while(min<=max) {
        mid=(min+max)/2;
        if(b==a[mid]) {
            printf("%d from a%d",b,mid);
            break;
        }
        else if(b>a[mid])
            min=mid+1;
        else 
            max=mid-1;
        if(min>max)
            printf("wu ci shu");
    }
    return 0;
}