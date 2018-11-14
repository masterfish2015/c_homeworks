#include<stdio.h>
#include<string.h>
int main()
{   char srt1[100],srt2[100];
    int i,a=0,b=0,n;
    char c;
    gets(srt1),gets(srt2);
    for(i=0; (c=srt1[i]!=0) ; i++)
        a=a+srt1[i];
    for(i=0; (c=srt2[i]!=0) ; i++)
        b=b+srt2[i];
    n=a-b;
    printf("%d\n",n);
    return 0;
}