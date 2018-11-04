#include<stdio.h>
int main()
{
    int l = 0;
    int m = 1;
    int sum = 0;
    for(l = 1;l<=20;l++)
    {
        m *=l;
        sum +=m;
    }
    printf("%d\n",sum);
    return 0;
}