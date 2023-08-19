#include <stdio.h>
int a[500][500];
int n, m, cnt=0;
void dfs(int y, int x) {
    if(y==n-1&&x==m-1) {
        cnt++;
    }
    else {
        if(y-1>=0&&a[y-1][x]<a[y][x]) dfs(y-1, x);
        if(y+1<n&&a[y+1][x]<a[y][x]) dfs(y+1, x);
        if(x-1>=0&&a[y][x-1]<a[y][x]) dfs(y, x-1);
        if(x+1<m&&a[y][x+1]<a[y][x]) dfs(y, x+1);
    }
    return;
}
int main() {
    int i, j;
    scanf("%d %d", &n, &m);
    for(i=0;i<n;i++) {
        for(j=0;j<m;j++) {
            scanf("%d", &a[i][j]);
        }
    }
    dfs(0, 0);
    printf("%d", cnt);
}