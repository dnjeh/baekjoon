#include <stdio.h>
int fun(int a, int b, int c) {
    if(a+b==c||a+c==b||b+c==a) return 1;
    else if(a*b==c||a*c==b||b*c==a) return 2;
    else return 3;
}
int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d", fun(a, b, c));
}