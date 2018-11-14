#include<stdio.h>

int main()
{
   int a[15]={4,5,8,13,2,6,19,62,31,27,32,36,21,14,13};
   int i,j,t;
   for(j=0;j<14;j++)
    for(i=0;i<14-j;i++)
    if(a[i]>a[i+1])
    {
    t=a[i];
    a[i]=a[i+1];
    a[i+1]=t;
    }
    for(i=0;i<15;i++)
    printf("%3d",a[i]);
    printf("\n");
    
    int d,b,c,e;
    scanf("%d",&c);
    c=13;
    d=0,b=14;
    e=d*b/2;
    while(d<b)
   {
    if(a[e]==c)
    printf("%d",e);break;
    else if(c<a[d]&&c>a[b])
    printf("不存在");break;
    else if(a[d]==c)
    printf("%d",d);break;
    else if(a[b]==d)
    printf("%d",b);break;
    else if(c>a[e])
     d=e,e=d*b/2;
    else if(c<a[e])
    b=e,e=d*b/2;
    else
    ;
    }
    return 0;
}