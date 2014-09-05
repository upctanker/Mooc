#include <stdio.h>
#include <stdlib.h>
#define M 10
int cmp(const void *a, const void *b)
{
    return(*(int *)a - *(int *)b);
}
int main()
{
    int a[M],i,p,b[M * 5],cnt = 0,j;
    for(i = 0; i < M; i ++)
    {
        scanf("%d",&a[i]);
        for(j = 0;j < a[i];j ++)
        {
            b[cnt ++] = i;
        }
    }
    qsort(b,cnt,sizeof(b[0]),cmp);
    if(b[0] == 0)//找第一个不为0的数输出
    {
        for(i = 1; i < cnt; i ++)
        {
            if(b[i] != 0)
            {
                printf("%d",b[i]);
                p = i;
                break;
            }
        }
        for(i = 0; i < cnt; i ++)
        {
            if(i != p)
            {
                printf("%d",b[i]);
            }
        }
    }
    else
    {
        for(i = 0; i < cnt; i ++)
        {
            printf("%d",b[i]);
        }
    }

    return 0;
}
