#include <stdio.h>
int max(int a, int b) {
    return a>b?a:b;
}
int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d", max(b-a-1, c-b-1));
}