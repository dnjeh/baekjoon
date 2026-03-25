#include <stdio.h>

int fun(int a, int b, int t) {
    return (t%(a+b))<=a&&(t%(a+b));
}

int main() {
    int a, b, c, d, t;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    for(int i=0;i<3;i++) {
       scanf("%d", &t);
       printf("%d\n", fun(a, b, t)+fun(c, d, t));
    }
}