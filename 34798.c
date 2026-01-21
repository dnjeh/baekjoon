#include <stdio.h>
int main() {
    int a, b, c, d;
    scanf("%d:%02d %d:%02d", &a, &b, &c, &d);
    printf("%s", (a*60+b<c*60+d)?"YES":"NO");
}