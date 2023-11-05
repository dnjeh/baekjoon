#include <stdio.h>
int a[500][500], n, m;
int dfs(int y, int x) {
    int ret=1;
    a[y][x]=0;
    if(y-1>=0&&a[y-1][x]) ret+=dfs(y-1, x);
    if(y+1<n&&a[y+1][x]) ret+=dfs(y+1, x);
    if(x-1>=0&&a[y][x-1]) ret+=dfs(y, x-1);
    if(x+1<m&&a[y][x+1]) ret+=dfs(y, x+1);
    return ret;
}
int main() {
    int i, j, cnt=0, max=0, t;
    scanf("%d %d", &n, &m);
    for(i=0;i<n;i++) {
        for(j=0;j<m;j++) {
            scanf("%d", &a[i][j]);
        }
    }
    for(i=0;i<n;i++) {
        for(j=0;j<m;j++) {
            if(a[i][j]) {
                t=dfs(i, j);
                cnt++;
                if(max<t) max=t;
            }
        }
    }
    printf("%d\n%d", cnt, max);
}