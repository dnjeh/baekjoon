#include <stdio.h>
int a[2000][2000];
int main() {
    int n, m, q, t, tt;
    scanf("%d %d %d", &n, &m, &q);
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            scanf("%d", &t);
            a[i][j]=t+(i-1>=0&&j-1>=0?a[i-1][j-1]:0)-(i-2>=0&&j-1>=0?a[i-2][j-1]:0)+(i-1>=0?a[i-1][j]:0);
        }
    }
    for(int i=0;i<q;i++) {
        scanf("%d %d", &t, &tt);
        printf("%d\n", a[t-1][tt-1]);
    }
}