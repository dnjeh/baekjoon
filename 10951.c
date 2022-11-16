#include <stdio.h>
int main() {
    int a, b, i;
    for(;scanf("%d %d", &a, &b)!=EOF;) {
        printf("%d\n", a+b);
    }
}