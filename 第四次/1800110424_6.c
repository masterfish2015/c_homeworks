#include<stdio.h>
main ()
{int i,j,s;
j=1;
s=0;
for(i=1;i<=20;i++)
{j=j*i;
s=s+j;
}
printf("1!+2!+……+20!= %d",s);
}