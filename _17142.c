#include <stdio.h>
int n, m;
int a[10][10], vis[10][10], now[10][2], lis[10][2], ti, aa;
void iput(int y, int x) {
    lis[ti][0]=y;
    lis[ti++][1]=x;
}
int main() {
    int i, j;
    scanf("%d %d", &n, &m);
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            scanf("%d", &a[i][j]);
            if(a[i][j]==2) lput(i, j);
            else if()
        }
    }
    bac(0, 0);
}