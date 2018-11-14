#include<stdio.h>
int main()
{
	int x,mid,i,high,low,n;
	int a[15]={2,4,5,6,8,13,13,14,19,21,27,31,32,36,62};
	i=15;high=i-1;low=0;
	printf("please input a number:");
	scanf("%d",&x);
	while(low<=high){
		mid=(high+low)/2;
		
		 if(x>a[mid])
				low=mid+1;
		else if(x<a[mid])
			high=mid-1;
		else if(x==a[mid])
		{
			printf("%d is the number in the array \n",x);
			break;}}
	if(x!=a[mid])
		printf("no the number\n");
	return 0;
}

