#include <stdio.h>
int a[1000][1000], vis[1000][1000], n, area, per, maxa, minp;
void dfs(int y, int x, int f) {
    vis[y][x]=1;
    area++;
    if(y+1<n&&!vis[y+1][x]&&a[y+1][x]) dfs(y+1, x, 0);
    else if(y+1>=n||!vis[y+1][x]) per++;
    if(y-1>=0&&!vis[y-1][x]&&a[y-1][x]) dfs(y-1, x, 0);
    else if(y-1<0||!vis[y-1][x]) per++;
    if(x+1<n&&!vis[y][x+1]&&a[y][x+1]) dfs(y, x+1, 0);
    else if(x+1>=n||!vis[y][x+1]) per++;
    if(x-1>=0&&!vis[y][x-1]&&a[y][x-1]) dfs(y, x-1, 0);
    else if(x-1<0||!vis[y][x-1]) per++;
    if(f&&(area>maxa||area==maxa&&per<minp)) {
        maxa=area;
        minp=per;
    }
}
int main() {
    char t[1020];
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        scanf("%s", t);
        for(int j=0;j<n;j++) {
            if(t[j]=='#') a[i][j]=1;
        }
    }
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            if(a[i][j]&&!vis[i][j]) {
                area=0;
                per=0;
                dfs(i, j, 1);
            }
        }
    }
    printf("%d %d", maxa, minp);
}