#include<stdio.h>
int main()
{
int i,num=0;
char s1[50],s2[50];
printf("请输入s1:");
gets(s1);
printf("请输入s2:");
gets(s2);
for(i=0;s1[i]!='\0'||s2[i]!='\0';i++)
{
printf("s1[%d]=%d",i,s1[i]);
printf("s2[%d]=%d",i,s2[i]);
num=num+s1[i]-s2[i];
printf("\n");}
printf("result=%d",num);
return 0;
}