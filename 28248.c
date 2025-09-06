#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", a*50-b*10+(a>b?500:0));
    return 0;
}
