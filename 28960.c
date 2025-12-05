#include <stdio.h>
int fun(int h, int l, int a, int b) {
    return (a<=l)&&(b<=h*2);
}
int main() {
    int h, l, a, b;
    scanf("%d %d %d %d", &h, &l, &a, &b);
    printf("%s", (fun(h, l, a, b)||fun(h, l, b, a))?"YES":"NO");
}