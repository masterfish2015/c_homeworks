#include<stdio.h>
int main()
{
    int a[15]={2,4,5,6,8,13,13,14,19,21,27,31,32,36,62};
    int x,low,high,mid,n;
    x=12;
    n=15;
    low=0;
    high=n-1;
    while(low<=high){
    mid=(low+high)/2;
    if(x>a[mid])
    high=mid-1;
    else if(x<a[mid])
     low=mid+1;
    else if(x==a[mid])
    {printf("d% is d%th number!\n",x,mid+1);break;}
    }
    if(x!=a[mid])
    printf("No match!\n");
    return 0;
}
