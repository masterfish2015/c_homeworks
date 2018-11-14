#include<stdio.h>
#include<string.h>
int main()
{
  char s1[]="china";
char s2[]="CHINA";
if(strcmp(s1,s2)==0)
printf("两个字符相等");
if(strcmp(s1,s2)>0)
printf("s1大于s2");
if(strcmp(s1,s2)<0)
printf("s1小于s2");
return 0;
}