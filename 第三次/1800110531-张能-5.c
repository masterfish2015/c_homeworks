#include <math.h>
 int main()
{
     int a;
    double b;
    printf("请输入一个小于1000的正数：");
    scanf("%d",&a);
    if(a>0&&a<1000){
    b=sqrt(a);
    printf("它的平方根为：%2.2f\n",b);
    }
    else
        printf("输入的数据不在范围，重新输入：\n");
        return 0;
}
    