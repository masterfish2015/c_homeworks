#include<stdio.h>
int main()
{
	long long i=1,s=0;
	int n;
	for(n=1;n<=20;n++)
	{
		i*=n;
		s+=i;
	}
	printf("%lld",s);
	return 0;
}
