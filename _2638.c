#include <stdio.h>
int a[100][100], vis[100][100], q[10100][2];
int ind, now, let=0, r, c;
int chk(int y, int x) {
    int ret=0;
    if(x-1>=0&&!a[y][x-1]&&vis[y][x-1]) ret++;
    if(x+1<c&&!a[y][x+1]&&vis[y][x+1]) ret++;
    if(y-1>=0&&!a[y-1][x]&&vis[y-1][x]) ret++;
    if(y+1<r&&!a[y+1][x]&&vis[y+1][x]) ret++;
    if(ret>=2) return ret;
    else return ret;
}
void qput(int y, int x) {
    q[ind][0]=y;
    q[ind++][1]=x;
}   
void bfs(int y, int x) {
    qput(y, x);
}
int main() {
    int i, j, cnt=0, dind;
    scanf("%d %d", &r, &c);
    for(i=0;i<r;i++) {
        for(j=0;j<c;j++) {
            scanf("%d", &a[i][j]);
            if(a[i][j]) let++;
        }
    }
    bfs(0, 0);
    for(cnt=0;let>=0;cnt++) {
        for(i=0;i<r;i++) {
            for(j=0;j<c;j++) {
                if(chk(i, j)) {
                    a[i][j]=0;
                    let--;
                    qput(i, j);
                }
            }
        }
    }
}
