#include <stdio.h>
int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    a=a*60+b;
    c=c*60+d;
    d=(24*60+c-a)%(24*60);
    printf("%d %d", d, d/30);
}