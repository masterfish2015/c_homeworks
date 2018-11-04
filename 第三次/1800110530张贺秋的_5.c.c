#include<stdio.h>
#include<math.h>

int main()
{
    int n,m,a;
    scanf("n=%d",&n);
    n=400;
    a=n<1000;
    if(a!=0)
    {
    m=sqrt(n);
    printf("%d",m);
    }
    else
        printf("重新输入");
        return 0;
}