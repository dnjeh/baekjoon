#include <stdio.h>
int main() {
    int s, a, b;
    scanf("%d %d %d", &s, &a, &b);
    printf("%d", 250+(s-a>0?((s-a)/b+((s-a)%b?1:0))*100:0));
}