#include <stdio.h>
#include <string.h>
#define M 100
int main()
{
    char s[M + 10];
    char t[10][10]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
    int sum = 0,i;
    gets(s);
    for(i = 0;s[i] != '\0';i ++)
    {
        sum += (s[i] - '0');
    }
    sprintf(s,"%d",sum);
    if(s[0] != '\0')
    {
        printf("%s",t[s[0] - '0']);
    }
    for(i = 1;s[i] != '\0';i ++)
    {
        printf(" %s",t[ s[i] - '0' ]);
    }
    printf("\n");
    return 0;
}
