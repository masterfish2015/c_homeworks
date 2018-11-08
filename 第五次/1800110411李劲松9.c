#include<stdio.h>
#include<stdlib.h>
int cmp(const void * a,const void * b) {
    return *((int *)a)-*((int *)b);
}
void main()
{
    int a[15],x,i,start,end;
    printf("input 15 numbers:\n");
    for(i=0; i<15; i++)
        scanf("%d",&a[i]);
    qsort(a,15,sizeof(int),cmp);
    printf("please enter the number:\n");
    scanf("%d",&x);
    for(start=0,end=14; start<=end;)
    {
        i=(start+end)>>1;
        if (x==a[i])
        {
            printf("%d",i+1);
            getchar();
            getchar();
            return;
        }
        else if (x>a[i])
            start = i+1;
        else
            end=i-1;
    }
}