#include <stdio.h>
int main() {
    int n, m, i, j, k;
    scanf("%d %d", &n, &m);
    int a[n][m];
    for(i=0;i<n;i++) {
        for(j=0;j<m;j++) {
            scanf("%1d", &a[i][j]);
        }
    }
    for(k=(n<m?(n-1):(m-1));k>=0;k--) {
        for(i=0;i+k<n;i++) {
            for(j=0;j+k<m;j++) {
                if(a[i][j]==a[i+k][j]&&a[i][j]==a[i][j+k]&&a[i][j]==a[i+k][j+k]) {
                    printf("%d", (k+1)*(k+1));
                    return 0;
                }
            }
        }
    }
}