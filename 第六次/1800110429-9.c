#include<stdio.h>

int main()
{
    int a[15]= {4,5,8,13,2,6,19,62,31,27,32,36,21,14,13};
    int i,j,t;
    for(j=0; j<15; j++)
        for(i=0; i<15-j; i++)
            if(a[i]>a[i+1])
            {
                t=a[i];
                a[i]=a[i+1];
                a[i+1]=t;
            }
    for(i=0; i<15; i++)
        printf("%4d",a[i]);
    printf("\n");
    int x,p,q,mid;
    scanf("%d",&x);
    p=0,q=14;
    while(p<=q)
    {
        mid=(p+q)/2;
        if(x<a[mid])
        {
            q=mid-1;
            continue;
        }
        else if(x>a[mid])
        {
            p=mid+1;
            continue;
        }
        else if(x==a[mid])
        { 
            printf("cun zai zhe ge shu\n");
            printf("x shi di %d ge shu\n",++mid);
            goto*42;
        }
    }
    printf("wu ci shu\n");
    return 0;
}