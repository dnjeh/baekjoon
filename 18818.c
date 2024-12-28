#include <stdio.h>
int n, a[100][100], vis[100][100], q[2][10100], qind;
void qput(int y, int x) {
    vis[y][x]=1;
    q[0][qind]=y;
    q[1][qind++]=x;
}
int bfs() {
    int ret, i, ind, f;
    qput(0, 0);
    for(ret=i=ind=f=0;ind<qind&&!f;ret++) {
        for(ind=qind;i<ind&&!f;i++) {
            int y=q[0][i], x=q[1][i];
            if(y==n-1&&x==n-1) {
                f=1;
            }
            else for(int j=0;j<4;j++) {
                int dy=j/2?(j%2?1:-1):0, dx=j/2?0:(j%2?1:-1);
                for(int k=1;;k++) {
                    int yd=y+dy*k, xd=x+dx*k;
                    if(yd<0||yd>=n||xd<0||xd>=n||a[yd][xd]) break;
                    else if(!vis[yd][xd]) qput(yd, xd);
                }
            }
        }
    }
    return (f?ret:0)-1;
}
int main() {
    char t[110];
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        scanf("%s", t);
        for(int j=0;j<n;j++) {
            if(t[j]=='#') {
                a[i][j]=1;
            }
        }
    }
    printf("%d", bfs());
}