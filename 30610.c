#include <stdio.h>
int a[1000][1000], b[1000100], n, m;
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
    int cnt=0;
    scanf("%d %d", &n, &m);
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            scanf("%01d", &a[i][j]);
        }
    }
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            if(a[i][j]) {
                b[dfs(i, j)]++;
                cnt++;
            }
        }
    }
    printf("%d\n", cnt);
    for(int i=0;i<1000010;i++) {
        if(b[i]) {
            printf("%d ", i);
            b[i]--;
            i--;
        }
    }
}
