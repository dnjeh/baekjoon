#include <stdio.h>

int main() {
    int a, b, c, i;
    for(i=1, scanf("%d %d %d", &a, &b, &c);a+b+c;scanf("%d %d %d", &a, &b, &c), i++) {
        printf("Case %d: %d\n", i, c/b*a+(a>(c%b)?c%b:a));
    }
}