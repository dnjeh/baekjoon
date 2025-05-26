#include <stdio.h>
int max(int a, int b) {
    return a>b?a:b;
}
int min(int a, int b) {
    return a<b?a:b;
}
int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d", a+b+c-(max(a, max(b, c)))-(min(a, min(b, c))));
}