#include <stdio.h>
#include <string.h>
#define M 100
int main()
{
    int n,ge,shi,bai;
    scanf("%d",&n);
    ge = n % 10;
    shi = n / 10 % 10;
    bai = n / 100;
    while(bai --)
    {
        printf("B");
    }
    while(shi --)
    {
        printf("S");
    }
    int k = 1;
    while(ge --)//��λ���������5�����12345����3�����123
    {
        printf("%d",k);
        k++;
    }
    printf("\n");
    return 0;
}
