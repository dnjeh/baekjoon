#include <stdio.h>
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", a!=1?(b!=1?(a*2+b*2-4):(a)):(b!=1?(b):(1)));
}