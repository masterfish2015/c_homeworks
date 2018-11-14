#include<stdio.h>
#include<string.h>
int main()
{   
  char s1[],s2[];
  int a;
  scanf("%s,%s",&s1,&s2);
  a=strcmp(s1,s2);
  if(a>0)
  printf("s1>s2");
  else if(a==0)
  printf("s1=s2");
  else
 printf("s1<s2");
    return 0;
}