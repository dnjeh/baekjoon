#include <stdio.h>
int fun(int n, int a, int b) {
    return (n/a+(n%a?1:0))*b;
}
int min(int a, int b) {
    return a<b?a:b;
}
int main() {
    int n, a, b, c, d;
    scanf("%d %d %d %d %d", &n, &a, &b, &c, &d);
    printf("%d", min(fun(n, a, b), fun(n, c, d)));
}