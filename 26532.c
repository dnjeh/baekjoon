#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", a*b/4840/5+(a*b%4840?1:0));
}
