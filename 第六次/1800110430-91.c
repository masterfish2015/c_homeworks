#include<stdio.h>
#define show_data(d,n)\
  for(int t=0;t<n;t++)\
      printf("%4d",d[t]);\
    putchar('\n');
int main()
{  int data[]={4,5,8,13,2,6,19,62,31,27,32,36,21,14,13};
    int n=sizeof(data)/sizeof(int);
    int i,j,max;
    for(i=n-1;i>0;i--)
    {
    max=0;
    for(j=0;j<i;j++)
    if(data[j]>data[max])
    max=j;
    if(data[max]>data[j])
    {
    int t=data[max];
    data[max]=data[i];
    data[i]=t;
    }
    show_data(data,n);
    }
    show_data(data,n);
    return 0;
}