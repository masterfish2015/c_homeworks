#include<stdio.h>

int main()
{
   int n,s,b;
   s=0;
    for(n=1;n<=10;n++)
      {for(b=100;;b=b/2)
      s=s+2*b;
      }
    printf("%d\n",s);
    return 0;
}