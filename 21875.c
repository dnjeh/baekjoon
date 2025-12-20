#include <stdio.h>
int abs(int a) {
    return a<0?a*-1:a;
}
int main() {
    char a, x;
    int b, y;
    scanf("%c%d\n%c%d", &a, &b, &x, &y);
    a=abs(a-x); b=abs(b-y);
    printf("%d %d", a<b?a:b, a>b?a:b);
}