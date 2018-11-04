#include<stdio.h>
int main()
{
	float s=0.0,l=100.0,i=1;
	for(;i<=10;i++)
	{
		s=s+l;
		l=l/2.0;
		s=s+l;
	}
	s=s-l;
	printf("the total distance:%f\n at this time of high:%f\n",s,l);
	return 0;
 } 
