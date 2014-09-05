#include <stdio.h>
//注意a+b不要超出int表示范围
int main()
{
    int n,i;
    double sum = 0.0,a = 2,b = 1;
    scanf("%d",&n);
    for(i = 1;i <= n;i ++)
    {
        sum += a / b;
        a = a + b;
        b = a - b;
    }
    printf("%.2f\n",sum);
    return 0;
}
