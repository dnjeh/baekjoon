#include <stdio.h>
int min(int a, int b) {
    return a<b?a:b;
}
int main() {
    int n, a, b, c;
    scanf("%d", &n);
    scanf("%d %d %d", &a, &b, &c);
    printf("%d", min(a, n)+min(b, n)+min(c, n));
}