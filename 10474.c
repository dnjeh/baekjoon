#include <stdio.h>

int main() {
    int a, b;
    for(scanf("%d %d", &a, &b);a+b;scanf("%d %d", &a, &b)) {
        printf("%d %d / %d\n", a/b, a%b, b);
    }
}
