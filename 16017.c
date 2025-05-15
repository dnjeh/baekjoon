#include <stdio.h>
int f(int t) {
    return t==8||t==9?1:0;
}
int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    printf("%s", f(a)&&b==c&&f(d)?"ignore":"answer");
}