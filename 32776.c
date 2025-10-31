#include <stdio.h>
int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    printf("%s", (a<=240||(a<=b+c+d))?"high speed rail":"flight");
}