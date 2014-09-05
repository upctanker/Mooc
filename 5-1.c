#include <stdio.h>
// 12/4->3/1  12/7->12/7,  12/12 ->1/1,6/12->1/2
int gcd(int m,int n)
{
    int r = m % n;
    while(r != 0)
    {
        m = n ;
        n = r;
        r = m % n;
    }
    return n;
}
int main()
{
    int m,n,r;
    scanf("%d/%d",&m,&n);
    if(m == n)
    {
        printf("1/1\n");
    }else
    {
        r = gcd(m,n);
        printf("%d/%d\n",(m / r),(n / r));
    }
    return 0;
}
