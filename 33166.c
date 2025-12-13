#include <stdio.h>
int main() {
    int p, q, a, b;
    scanf("%d %d %d %d", &p, &q, &a, &b);
    printf("%d", (q>p?p*a:q*a)+(q-p>0?(q-p)*b:0));
}