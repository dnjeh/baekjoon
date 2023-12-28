#include <stdio.h>
int max(int a, int b) { return a>b?a:b; }
int main() {
    int a, b, c, d, l;
    scanf("%d %d %d %d %d", &l, &a, &b, &c, &d);
    printf("%d", l-max(a/c+(a%c?1:0), b/d+(b%d?1:0)));
}