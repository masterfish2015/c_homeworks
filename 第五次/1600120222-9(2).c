#include<stdio.h>
int main()
{
 int x,mid,n,high,low;
 int a[15]={2,4,5,6,8,13,13,14,19,
21,27,31,32,36,62};
n=15;
low=0;
high=n-1;
printf("请输入一个数:");
scanf("%d",&x);
while(low<=high){
mid=(high+low)/2;
if(x>a[mid])
low=mid+1;
else if(x<a[mid])
high=mid-1;
else if(x==a[mid]){
printf("%d是数组中的数!\n",x);
break;}}
if(x!=a[mid])
printf("不存在!\n");
return 0;
}