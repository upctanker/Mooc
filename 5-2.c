#include<stdio.h>
int main()
{
    char a[10][5]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
    char s[20];
    int i;
    gets(s);
    for(i = 0;s[i + 1] !='\0';i ++)
    {
        if(s[i] == '-')
        {
            printf("fu ");
        }
        else
        {
             printf("%s ",a[s[i] - '0']);
        }
    }
    printf("%s\n",a[s[i] - '0']);
    return 0;
}