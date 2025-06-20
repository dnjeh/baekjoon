#include <stdio.h>
int fmax(int a, int b) {
    return a>b?a:b;
}
int main() {
    int a, b, c, max;
    scanf("%d %d %d", &a, &b, &c);
    max=fmax(a, fmax(b, c));
    printf("%d", max*3-a-b-c);
}