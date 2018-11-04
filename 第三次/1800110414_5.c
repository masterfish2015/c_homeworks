#include <stdio.h>
int main()
{
    float a,b;
    int c;
    printf("please input a num below 1000：");
    scanf("%f",&a);
    while(a>=1000)
    {
        printf ("please input again：");
        scanf("%f",&a);
    }
    c=sqrt(a);
    printf("%d\n",c);
}