#include <stdio.h>
int main()
{
    long long int a,b,c;
    int T,i = 1;
    scanf("%d",&T);
    while(T --)
    {
        scanf("%lld%lld%lld",&a,&b,&c);
        if(a + b > c)
        {
            printf("Case #%d: true\n",i);
        }
        else
        {
            printf("Case #%d: false\n",i);
        }
        i ++;
    }
    return 0;
}
