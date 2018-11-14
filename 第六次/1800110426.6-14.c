#include<stdio.h>
#include<string.h>
int main()
{
    int i,j=0,s=0;
    char c1[100],c2[100];
    gets(c1),gets(c2);
    for(i=0; c1[i]!='\0'&&c2[i]!='\0'; i++) {
        j=c1[i]-c2[i];
        s=s+j;
    }
    printf("%d\n",s);
    return 0;
}