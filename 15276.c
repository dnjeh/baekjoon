#include <stdio.h>
int main() {
    long double a, b, c;
    scanf("%Lf %Lf %Lf", &a, &b, &c);
    printf("%d", (int)((a*b/c)>(a/b*c)?(a*b/c):(a/b*c)));
}