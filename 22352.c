#include <stdio.h>
int a[30][30], b[30][30], n, m;
int dfs(int y, int x, int aa, int bb) {
    a[y][x]=0; b[y][x]=0;
    if(y-1>=0&&(b[y-1][x]||a[y-1][x]==aa)) {
        if(b[y-1][x]!=bb||a[y-1][x]!=aa||dfs(y-1, x, aa, bb)) return 1;
    }
    if(y+1<n&&(b[y+1][x]||a[y+1][x]==aa)) {
        if(b[y+1][x]!=bb||a[y+1][x]!=aa||dfs(y+1, x, aa, bb)) return 1;
    }
    if(x-1>=0&&(b[y][x-1]||a[y][x-1]==aa)) {
        if(b[y][x-1]!=bb||a[y][x-1]!=aa||dfs(y, x-1, aa, bb)) return 1;
    }
    if(x+1<m&&(b[y][x+1]||a[y][x+1]==aa)) {
        if(b[y][x+1]!=bb||a[y][x+1]!=aa||dfs(y, x+1, aa, bb)) return 1;
    }
    
    return 0;
}
int main() {
    int cnt=0;
    scanf("%d %d", &n, &m);
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            scanf("%d", &a[i][j]);
        }
    }
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            scanf("%d", &b[i][j]);
            if(a[i][j]==b[i][j]) b[i][j]=0;
        }
    }
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            if(b[i][j]) {
                if(dfs(i, j, a[i][j], b[i][j])) {
                    printf("NO");
                    return 0;
                }
                cnt++;
            }
        }
    }
    if(cnt<=1) printf("YES");
    else printf("NO");
}   