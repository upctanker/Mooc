#include <stdio.h>
int main()
{
    int a,n,i,sum = 0,t;
    scanf("%d%d",&a,&n);
    t = a;
    for(i = 1;i <= n;i ++)
    {
        sum += t;
        t = t * 10 + a;
    }
    printf("%d\n",sum);
    return 0;
}