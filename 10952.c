#include <stdio.h>
int main() {
    int a, b, i;
    scanf("%d %d", &a, &b);
    for(;a!=0&&b!=0;) {
        printf("%d\n", a+b);
        scanf("%d %d", &a, &b);
    }
}