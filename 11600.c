#include <stdio.h>
int a[1024][1024];
int main() {
    int n, m, x1, x2, y1, y2, i, j;
    scanf("%d %d", &n, &m);
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            scanf("%d", &a[i][j]);
            a[i][j]+=((i-1>=0)?a[i-1][j]:0)+((j-1>=0)?a[i][j-1]:0)-((i-1>=0&&j-1>=0)?a[i-1][j-1]:0);
        }
    }
    for(i=0;i<m;i++) {
        scanf("%d %d %d %d", &y1, &x1, &y2, &x2);
        x1--; y1--; x2--; y2--;
        printf("%d\n", a[y2][x2]-((y1-1>=0)?a[y1-1][x2]:0)-((x1-1>=0)?a[y2][x1-1]:0)+((y1-1>=0&&x1-1>=0)?a[y1-1][x1-1]:0));
    }
}