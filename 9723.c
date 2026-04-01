#include <stdio.h>
int main() {
    int n, a, b, c;
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        scanf("%d %d %d", &a, &b, &c);
        printf("Case #%d: %s\n", i+1, a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a?"YES":"NO");
    }
}