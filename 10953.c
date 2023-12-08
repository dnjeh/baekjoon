#include <stdio.h>
int main() {
    int n, i, t, tt;
    scanf("%d", &n);
    for(i=0;i<n;i++) {
        scanf("%d,%d", &t, &tt);
        printf("%d\n", t+tt);
    }
}