#include <stdio.h>
#define N 110000
int main()
{
    int m,n,k = 0,i;
    int f[110000];//1000¸öËØÊı
    int a[N];
    int j;
    for (i=2; i<N; i++)
        if (f[i]==0)
        {
            for ( j=i+i; j<N; j+=i)
                    f[j]=1;
        }
    int cnt=0;
    for (i=2; i<N; i++)
        if (f[i]==0)a[cnt++]=i;
    scanf("%d%d",&m,&n);
    k = 1;
    for(i = m; i < n; i ++)
    {
        if(k % 10 == 0)
        {
            printf("%d\n",a[i - 1]);
        }
        else
        {
            printf("%d ",a[i - 1]);
        }
        k ++;
    }
    printf("%d\n",a[n-1]);
    return 0;
}
