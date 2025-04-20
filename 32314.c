#include <stdio.h>
int main() {
    int n, w, v;
    scanf("%d %d %d", &n, &w, &v);
    printf("%d", n<=w/v?1:0);
}