#include <stdio.h>
#define INF 0x7f7f7f7f
int calc(char c, int a, int b) {
    if (b == -1) return INF;
    if (c == '+') return a + b;
    if (c == '-') return a - b;
    if (c == '*') return a * b;
    if (c == '/' && b != 0) return a / b;
    return INF;
}
int main() {
    int a, result = 0, flag = 1;
    char oper = '+';
    while (oper != '=') {
        if (flag) {
            a = -1;
            scanf("%d", &a);
            result = calc(oper, result, a);
            if (result == INF) {
                break;
            }
        } else {
            scanf("%c", &oper);
        }
        flag ^= 1;
    }
    if (result == INF) {
        printf("ERROR\n");
    } else printf("%d\n", result);
    return 0;
}