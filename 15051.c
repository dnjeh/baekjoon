#include <stdio.h>
int min(int a, int b) {
    return a<b?a:b;
}
int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d", min(min(a*4+b*2, a*2+c*2), b*2+c*4));
}