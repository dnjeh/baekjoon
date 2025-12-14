#include <stdio.h>
int main() {
    int m, a, b;
    scanf("%d %d %d", &m, &a, &b);
    if(b<a) b+=m;
    printf("%d", b-a);
}