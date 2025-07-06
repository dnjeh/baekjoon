#include <stdio.h>
int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%c", a==b||b==c||a==c||a+b==c||a+c==b||b+c==a?'S':'N');
}