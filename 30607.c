#include <stdio.h>
int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d", (a+b==c||a+c==b||b+c==a)?1:0);
}