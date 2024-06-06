#include <stdio.h>

int main() {
    int a, b, n, k, min, max;
    scanf("%d %d %d %d", &a, &b, &n, &k);
    if(a>n-k) max=a;
    else max=n-k;
    if(b<n+k) min=b;
    else min=n+k;
    if(max>min) printf("IMPOSSIBLE");
    else printf("%d", min-max+1);
    return 0;
}
