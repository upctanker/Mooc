#include <stdio.h>
#include <math.h>
#define M 1000
int main()
{
    char s[M],ch;
    int cnt = 0,flag = 0;
    scanf("%c",&ch);
    while( ch !='.')
    {
        if(ch != ' ')
        {
            cnt ++;
            flag = 1;
        }else if(flag)
        {
            printf("%d ",cnt);
            cnt = 0;
            flag = 0;
        }
        scanf("%c",&ch);
    }
    if (cnt)//��Ҫ�����ж�.����һ��������a a a .
        printf("%d\n",cnt);
    return 0;
}
