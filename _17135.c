#include <stdio.h>
int vis[15][15], q[1000][2], ind;
int a[15][15], now[3], n, m, d;
void qput(int y, int x) {
    q[ind][0]=y;
    q[ind++][1]=x;
}
int chk(int y, int x) {
    
}
int bfs(int t) {
    int i, x, y; ind=0;
    qput(0, t);
    for(i=0;i<ind;i++) {
        y=q[i][0], x=q[i][1];
        if(chk(y, x-1+t)) qput(y, x-1);
        if(chk(y+1, x+t)) qput(y+1, x);
        if(chk(y, x+1+t)) qput(y, x+1);
    }
}
int main() {
    int i, j;
    scanf("%d %d %d", &n, &m, &d);
    for(i=n-1;i>=0;i--) {
        for(j=0;j<m;j++) {
            scanf("%d", &a[i][j]);
        }
    }
}