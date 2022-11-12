#include <stdio.h>
int main() {
    int n, m, i, j, t;
    scanf("%d %d", &n, &m);
    int a[n][m];
    for(i=0;i<n;i++) {
        for(j=0;j<m;j++) {
            scanf("%d", &a[i][j]);
        }
    }
    for(i=0;i<n;i++) {
        for(j=0;j<m;j++) {
            scanf("%d", &t);
            a[i][j]+=t;
        }
    }
    for(i=0;i<n;i++) {
        for(j=0;j<m;j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}