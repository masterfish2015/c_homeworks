#include<stdio.h>
int main()
{
int s[15]={15,14,13,12,11,10,9,8,7,6,5,4,3,2,1};
int n,l,h,m;
printf("输入数:");
scanf("%d",&n);
for(l=0,h=14;l<=h;){m=(l+h)/2;
if(n>s[m]) h=m-1;
else if(n<s[m]) l=m+1;
else {printf("s[%d]=%d",n,m+1);
break;}}
if(n!=s[m])
printf("无此数");
return 0;}