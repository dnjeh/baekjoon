#include <stdio.h>
int main() {
    int a[300][300], tx, ty, ttx, tty, n, m, k, t;
    scanf("%d %d", &n, &m);
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            scanf("%d", &t);
            a[i][j]=t+(i>0?a[i-1][j]:0)+(j>0?a[i][j-1]:0)-(i>0&&j>0?a[i-1][j-1]:0);
        }
    }
    scanf("%d", &k);
    for(int i=0;i<k;i++) {
        scanf("%d %d %d %d", &ty, &tx, &tty, &ttx);
        tx--; ty--; ttx--; tty--;
        printf("%d\n", a[tty][ttx]-(tx>0?a[tty][tx-1]:0)-(ty>0?a[ty-1][ttx]:0)+(ty>0&&tx>0?a[ty-1][tx-1]:0));
    }
}