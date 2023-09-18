#include <stdio.h>
int a[1000][1000], vis[1000][1000], b[1000][1000], num[1000][1000], q[2][1000010], qq[4];
int qind, qqind, nind, n, m;
void qput(int y, int x) {
    q[0][qind]=y;
    q[1][qind++]=x;
    vis[y][x]=1;
}
void bfs(int y, int x) {
    int i, t, yy, xx; qind=0;
    qput(y, x);
    for(i=0;i<qind;i++) {
        yy=q[0][i]; xx=q[1][i]; 
        if(xx-1>=0&&!vis[yy][xx-1]&&!a[yy][xx-1]) qput(yy, xx-1);
        if(xx+1<m&&!vis[yy][xx+1]&&!a[yy][xx+1]) qput(yy, xx+1);
        if(yy-1>=0&&!vis[yy-1][xx]&&!a[yy-1][xx]) qput(yy-1, xx);
        if(yy+1<n&&!vis[yy+1][xx]&&!a[yy+1][xx]) qput(yy+1, xx);
    } 
    t=i; nind++;
    for(i=0;i<qind;i++) {
        yy=q[0][i]; xx=q[1][i]; 
        b[yy][xx]=t;
        num[yy][xx]=nind;
    }
}
int chk(int y, int x) {
    for(int i=0;i<qqind;i++) {
        if(qq[i]==num[y][x]) return 0;
    }
    qq[qqind++]=num[y][x];
    return 1;
}
int get(int y, int x) {
    int ret=0; qqind=0;
    if(x-1>=0&&b[y][x-1]&&chk(y, x-1)) ret+=b[y][x-1];
    if(x+1<m&&b[y][x+1]&&chk(y, x+1)) ret+=b[y][x+1];
    if(y-1>=0&&b[y-1][x]&&chk(y-1, x)) ret+=b[y-1][x];
    if(y+1<n&&b[y+1][x]&&chk(y+1, x)) ret+=b[y+1][x];
    return (ret+1)%10;
}
int main() {
    int i, j;
    scanf("%d %d", &n, &m);
    for(i=0;i<n;i++) {
        for(j=0;j<m;j++) {
            scanf("%1d", &a[i][j]);
        }
    }
    for(i=0;i<n;i++) {
        for(j=0;j<m;j++) {
            if(!a[i][j]&&!vis[i][j]) bfs(i, j);
        }
    }
    for(i=0;i<n;i++) {
        for(j=0;j<m;j++) {
            if(!a[i][j]) printf("0");
            else printf("%d", get(i, j));
        }
        printf("\n");
    }
}
