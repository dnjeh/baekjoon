#include <stdio.h>
int a[1000][1000], vis[1000][1000], r, c, q[2][1000100], qind, qq[2][1000100], qqind;
void qput(int y, int x) {
    vis[y][x]=1;
    q[0][qind]=y;
    q[1][qind++]=x;
}
void qqput(int y, int x) {
    a[y][x]=1;
    qq[0][qqind]=y;
    qq[1][qqind++]=x;
}
int bfs() {
    int i, j, ind, jind, f, cnt;
    for(i=j=ind=jind=f=cnt=0;ind<qind&&!f;cnt++) {
        for(ind=qind;i<ind&&!f;i++) {
            int y=q[0][i], x=q[1][i];
            if(!a[y][x]&&(!x||!y||y+1==r||x+1==c)) f=1; 
            else if(!a[y][x]) {
                if(x-1>=0&&!a[y][x-1]&&!vis[y][x-1]) qput(y, x-1);
                if(x+1<c&&!a[y][x+1]&&!vis[y][x+1]) qput(y, x+1);
                if(y-1>=0&&!a[y-1][x]&&!vis[y-1][x]) qput(y-1, x);
                if(y+1<r&&!a[y+1][x]&&!vis[y+1][x]) qput(y+1, x);
            }
        }
        for(jind=qqind;j<jind&&!f;j++) {
            int y=qq[0][j], x=qq[1][j];
            if(x-1>=0&&!a[y][x-1]) qqput(y, x-1);
            if(x+1<c&&!a[y][x+1]) qqput(y, x+1);
            if(y-1>=0&&!a[y-1][x]) qqput(y-1, x);
            if(y+1<r&&!a[y+1][x]) qqput(y+1, x);
        }
    }
    return !f?0:cnt;
}
int main() {
    int it;
    char t[1010], x, y;
    scanf("%d %d", &r, &c);
    for(int i=0;i<r;i++) {
        scanf("%s", t);
        for(int j=0;j<c;j++) {
            if(t[j]=='#'||t[j]=='F') a[i][j]=1;
            if(t[j]=='F') qqput(i, j);
            if(t[j]=='J') qput(i, j);
        }
    }
    if(it=bfs()) printf("%d", it);
    else printf("IMPOSSIBLE");
    return 0;
}
