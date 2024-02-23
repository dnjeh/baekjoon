#include <stdio.h>
int q[450000][3], qind;
int vis[20][20][1024];
void qput(int y, int x, int key, int now) {
    q[qind][0]=y;
    q[qind][1]=x;
    q[qind][2]=key;
    vis[y][x][key]=now;
    qind++;
}
int bfs(int a[][20], int n, int m, int cnt, int now) {
    int ret, f=0, i, y, x, key, ind=0;
    for(i=ret=0;!f&&ind<qind;ret++) {
        for(ind=qind;i<ind&&!f;i++) {
            y=q[i][0]; x=q[i][1]; key=q[i][2];
            //if(key) printf("%d\n", key);
            if(key==((1<<cnt)-1)) f=1;
            else {
                if(y-1>=0&&a[y-1][x]!=(1<<10)&&vis[y-1][x][key]!=now) qput(y-1, x, key|a[y-1][x], now);
                if(y+1<n&&a[y+1][x]!=(1<<10)&&vis[y+1][x][key]!=now) qput(y+1, x, key|a[y+1][x], now);
                if(x-1>=0&&a[y][x-1]!=(1<<10)&&vis[y][x-1][key]!=now) qput(y, x-1, key|a[y][x-1], now);
                if(x+1<m&&a[y][x+1]!=(1<<10)&&vis[y][x+1][key]!=now) qput(y, x+1, key|a[y][x+1], now);
            }
        }
    }
    return f?ret-1:-1;
}
int main() {
    int n, m, a[20][20], tcnt;
    char t[24];
    for(int i=1;;i++) {
        scanf("%d %d", &m, &n);
        if(!(n+m)) break;
        qind=tcnt=0;
        for(int y=0;y<n;y++) {
            scanf("%s", t);
            for(int x=0;x<m;x++) {
                if(t[x]=='.') a[y][x]=0;
                else if(t[x]=='x') a[y][x]=1<<10;
                else if(t[x]=='o') {
                    a[y][x]=0;
                    qput(y, x, 0, i);
                }
                else {
                    a[y][x]=1<<tcnt++;
                }
            }
        }
        printf("%d\n", bfs(a, n, m, tcnt, i));
    }
}