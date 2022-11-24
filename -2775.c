#include <stdio.h>
int hosum(int k, int n) {
    int a[k+1][n+1], j, j1, sum=0;
    for(j=0;j<=k;j++) {
        for(j1=1;j1)
    }
}
int main() {
    int t, k, n, i;
    scanf("%d", &t);
    for(i=0;i<t;i++) {
        scanf("%d %d", &k, &n);
        printf("%d\n", hosum(k, n));
    }
}