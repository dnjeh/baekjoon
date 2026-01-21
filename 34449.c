#include <stdio.h>
int main() {
    long double d, w;
    int n;
    scanf("%llf %llf %d", &d, &w, &n);
    printf("%s", d*3.14159>=n*w?"YES":"NO");
}