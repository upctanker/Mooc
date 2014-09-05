#include <stdio.h>
#include <math.h>
#define M 1000
int main() {
    char s[M], ch;
    int cnt = 0, flag = 0,first = 1;
    while ( (ch = getchar()) != '.') {
        if (ch != ' ') {
            cnt ++;
            flag = 1;
        } else if (flag) {
            if (first)
                printf("%d", cnt);
            else printf(" %d", cnt);
            cnt = 0;
            flag = 0;
            first = 0;
        }
    }
    if (cnt && first)
        printf("%d\n",cnt);
    else if (cnt && !first)
        printf(" %d\n", cnt);
    else puts("");
    return 0;
}