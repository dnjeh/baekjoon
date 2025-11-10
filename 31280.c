#include <stdio.h>
int min(int a, int b) {
    return a<b?a:b;
}
int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    printf("%d", a+b+c+d+1-min(a, min(b, min(c, d))));
}