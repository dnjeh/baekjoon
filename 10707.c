#include <stdio.h>
int min(int a, int b) {
    return a<b?a:b;
}

int main() {
    int a, b, c, d, p;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &p);
    printf("%d", min(a*p, c>=p?b:b+(p-c)*d));
}