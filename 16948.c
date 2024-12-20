#include <stdio.h>
int a[200][200], vis[200][200], q[2][40100], qind;
void qput(int y, int x) {
    vis[y][x]=1;
    q[0][qind]=y;
    q[1][qind++]=x;
}
int chk(int y, int x, int n) {
    if(y<n&&y>=0&&x<n&&x>=0&&!vis[y][x]) return 1;
    else return 0;
}
int bfs(int sy, int sx, int ey, int ex, int n) {
    int ret, i, ind, f=0;
    qput(sy, sx);
    for(ret=i=ind=0;ind<qind&&!f;ret++) {
        for(ind=qind;i<ind&&!f;i++) {
            int ny=q[0][i], nx=q[1][i];
            if(ny==ey&&nx==ex) f=1;
            else {
                int a[6][2]={{ny-2, nx-1}, {ny-2, nx+1}, {ny, nx-2}, {ny, nx+2}, {ny+2, nx-1}, {ny+2, nx+1}};
                for(int j=0;j<6;j++) {
                    if(chk(a[j][0], a[j][1], n)) qput(a[j][0], a[j][1]);
                }
            }
        }
    }
    return f?ret-1:-1;
}
int main() {
    int n, sy, sx, ey, ex;
    scanf("%d %d %d %d %d", &n, &sy, &sx, &ey, &ex);
    printf("%d", bfs(sy, sx, ey, ex, n)); 
}