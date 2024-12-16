#include <stdio.h>
int abs(int t) {
    return t<0?t*-1:t;
}
int min(int a, int b) {
    return a<b?a:b;
}
int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    printf("%d", min(abs(a+b-(c+d)), min(abs(a+d-(b+c)), abs(a+c-(b+d)))));
}