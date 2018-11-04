#include <stdio.h>
main()
{
float h=100,s=100;
int i;
for(i=1;i<10;i++) 
{
h=h/2;
s+=h*2;
}
printf("%fm\n",s);
printf("%fm\n",h);
return 0;
}