#include <stdio.h>
int q[2][3000], a[50][50], vis[50][50], qind;
int n, m;
void qput(int t, int tt, int id) {
    vis[t][tt]=id;
    q[0][qind]=t;
    q[1][qind]=tt;
    qind++;
}
int bfs(int ty, int tx) {
    static int id=1;
    int y, x, cnt, i, ind=0;
    id++;
    qind=0;
    qput(ty, tx, id); 
    for(i=cnt=0;ind<qind;cnt++) {
        for(ind=qind;i<ind;i++) {
            y=q[0][i]; x=q[1][i];
            if(y+1<n&&vis[y+1][x]!=id&&a[y+1][x]) qput(y+1, x, id);
            if(y-1>=0&&vis[y-1][x]!=id&&a[y-1][x]) qput(y-1, x, id);
            if(x+1<m&&vis[y][x+1]!=id&&a[y][x+1]) qput(y, x+1, id);
            if(x-1>=0&&vis[y][x-1]!=id&&a[y][x-1]) qput(y, x-1, id);
        }
    }
    return cnt-1;
}
int main() {
    int i, j, it, ans=0;
    char t[60];
    scanf("%d %d", &n, &m);
    for(i=0;i<n;i++) {
        scanf("%s", t);
        for(j=0;j<m;j++) {
            if(t[j]=='L') a[i][j]=1;
        }
    }
    for(i=0;i<n;i++) {
        for(j=0;j<m;j++) {
            if(a[i][j]&&(it=bfs(i, j))>ans) {
                ans=it;
            }
        }
    }
    printf("%d", ans);
}