#define M 15
#include<stdio.h>
int main()
{   static int a[M]= {2,4,5,6,8,13,13,14,19,21,27,31,32,36,62};
    int n,low,mid,high,found;
    low=0;
    high=M-1;
    found=0;
    printf("请输入一个数:");
    scanf("%d",&n);
    while(low<=high)
    {   mid=(low+high)/2;
        if (n==a[mid]) {
            found=1;    
            break;
        }
        else if (n>a[mid]) low=mid+1;
        else high=mid-1;
    }
    if (found==1) printf("这个数是第%d个元素",mid);
    else printf("无此数");
    
}