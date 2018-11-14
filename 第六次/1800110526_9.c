#include <stdio.h>
int main()
{   int a[15]={4,5,8,13,2,6,19,62,31,27,32,36,21,14,13};
    int i,j,t;
    for(j=0;j<14;j++)
    for(i=0;i<14-j;i++)
    if(a[i]>a[i+1])
    {t=a[i];a[i]=a[i+1];a[i+1]=t;}
    for(i=0;i<15;i++)
    printf(" %d",a[i]);  
    int x,l,h,m,n;
    n=15;
    l=0;
    h=n-1;
    scanf("%d", &x);
    while(l<=h){
        m=(l+h)/2; 
        if(x==a[m]){
        printf("%d is %dth number\n",x,m+1);
        return 0;//结束循环
                      }
        else if(a[m]>x)
        h=m-1;
        else 
        l=m+1;    }
     printf("no match");   
}