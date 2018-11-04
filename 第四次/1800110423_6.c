#include <stdio.h>
void main()
{
int i;
long int sum=0,p=1;
for(i=1;i<=20;i++)
{	p*=i;
sum+=p;}
printf("1!+2!+3!+....+20!=%ld",sum);
}