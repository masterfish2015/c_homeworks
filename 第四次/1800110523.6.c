#include<stdio.h>
int main()
{
    int n=0,|f = 1,sum = 0;
    for(n = 1;n<=20;n++)
    {
        f *=n;
        sum +=f;
    }
    printf("%d\n",sum);
    return 0;
}