#include <stdio.h>
int a[19][19], vis[4][19][19];
int dfs(int y, int x, int dy, int dx, int f, int ff) {
    if(y<19&&y>=0&&x<19&&x>=0&&!vis[ff][y][x]&&a[y][x]==f) {
        vis[ff][y][x]=1;
        return dfs(y+dy, x+dx, dy, dx, f, ff)+1;
    }
    else return 0;
}
int main() {
    int y[4] = {1, 0, 1, 1}, x[4]={-1, 1, 1, 0};
    for(int i=0;i<19;i++) {
        for(int j=0;j<19;j++) {
            scanf("%d", &a[i][j]);
        }
    }
    for(int i=0;i<19;i++) {
        for(int j=0;j<19;j++) {
            if(a[i][j]&&(!vis[0][i][j]||!vis[1][i][j]||!vis[2][i][j]||!vis[3][i][j])) {
                for(int k=0;k<4;k++) {
                    int t = dfs(i, j, y[k], x[k], a[i][j], k);
                    if(t==5) {
                        if(!k) printf("%d\n%d %d", a[i][j], i+1+4, j+1-4);
                        else printf("%d\n%d %d", a[i][j], i+1, j+1);
                        return 0;
                    }
                }
            }
        }
    }
    printf("0");
}