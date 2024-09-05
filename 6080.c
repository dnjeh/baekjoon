#include <stdio.h>
int a[1000][1000], n, m;

void dfs(int y, int x) {
    a[y][x]=0;
    for(int dy=-1;dy<=1;dy++) {
        for(int dx=-1;dx<=1;dx++) {
            if(!dy&&!dx) continue;
            if(dy+y>=0&&dy+y<n&&dx+x>=0&&dx+x<m&&a[dy+y][dx+x]) dfs(dy+y, dx+x);
        }
    }
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
            if(a[i][j]) {
                dfs(i, j);
                cnt++;
            }
        }
    }
    printf("%d", cnt);
    return 0;
}
