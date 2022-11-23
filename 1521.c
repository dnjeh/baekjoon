#include <stdio.h>
int main() {
    int i, j, n, k, sum=0;
    scanf("%d %d", &n, &k);
    int a[n][n];
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            scanf("%d", &a[i][j]);
        }
    }
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            if(a[i][j]!=-1&&a[i][j]+k<=5) {
                sum++;
            }
        }
    }
    printf("%d", sum);
}