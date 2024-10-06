#include <stdio.h>
int a[500][500], vis[500][500], q[2][250100], qind, n, m, k;
int abs(int t) {
    return t<0?t*-1:t;
}
void qput(int t, int tt) {
    vis[t][tt]=1;
    q[0][qind]=t;
    q[1][qind++]=tt;
}
void bfs(int y, int x) {
    int _y, _x;
    qind=0;
    qput(y, x);
    for(int i=0, ind=0;ind<qind;) {
        for(ind=qind;i<ind;i++) {
            _y=q[0][i]; _x=q[1][i];
            if(_y+1<n&&!vis[_y+1][_x]&&abs(a[_y][_x]-a[_y+1][_x])<=k) qput(_y+1, _x);
            if(_y-1>=0&&!vis[_y-1][_x]&&abs(a[_y][_x]-a[_y-1][_x])<=k) qput(_y-1, _x);
            if(_x+1<m&&!vis[_y][_x+1]&&abs(a[_y][_x]-a[_y][_x+1])<=k) qput(_y, _x+1);
            if(_x-1>=0&&!vis[_y][_x-1]&&abs(a[_y][_x]-a[_y][_x-1])<=k) qput(_y, _x-1);
        }
    }
}
int main() {
    int cnt=0;
    scanf("%d %d %d", &n, &m, &k);
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            scanf("%d", &a[i][j]);
        }
    }
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            if(!vis[i][j]) {
                cnt++;
                bfs(i, j);
            }
        }
    }
    printf("%d", cnt);
}