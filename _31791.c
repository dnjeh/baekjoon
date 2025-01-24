#include <stdio.h>
int a[1000][1000], vis[1000][1000], q[2][3][1000100], qind[2];
void qput(int t, int tt, int ttt, int tttt) {
    if(!t) a[tt][ttt]=1;
    vis[tt][ttt]=1;
    q[t][0][qind[t]]=tt;
    q[t][1][qind[t]]=ttt;
    q[t][2][qind[t]++]=tttt;
}
void bfs(int tg, int tb, int n, int m) {
    for(int ind=0, i=0, cnt=0, j=0;ind<qind[0]&&cnt<tg;) {
        for(ind=qind[0];i<ind;i++) {
            int x=q[0][1][i], y=q[0][0][i];
            if(x-1>=0&&!vis[y][x-1]) qput(!a[y][x-1]?0:1, y, x-1, !a[y][x-1]?0:tb+cnt);
            if(x+1<m&&!vis[y][x+1]) qput(!a[y][x+1]?0:1, y, x+1, !a[y][x+1]?0:tb+cnt);
            if(y-1>=0&&!vis[y-1][x]) qput(!a[y-1][x]?0:1, y-1, x, !a[y-1][x]?0:tb+cnt);
            if(y+1<n&&!vis[y+1][x]) qput(!a[y+1][x]?0:1, y+1, x, !a[y+1][x]?0:tb+cnt);
        }
        for(;j<qind[1];j++) {
            int x=q[1][1][j], y=q[1][0][j], tcnt=q[1][2][j];
            if(tcnt>cnt) {
                j--;
                break;
            }
            qput(0, y, x, 0);
        }
        cnt++;
    }
}
int main() {
    char t[1010];
    int n, m, tg, tb, it, f=0;
    scanf("%d %d %d %d %d %d", &n, &m, &tg, &tb, &it, &it);
    for(int i=0;i<n;i++) {
        scanf(" %s", t);
        for(int j=0;j<m;j++) {
            if(t[j]=='*') qput(0, i, j, 0);
            else if(t[j]=='#') a[i][j]=-1;
        }
    }
    bfs(tg, tb, n, m);
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            //printf("%d ", a[i][j]);
            if(a[i][j]<1) {
                f=1;
                printf("%d %d\n", i+1, j+1);
            }
        }
        //printf("\n");
    }
    if(!f) printf("-1");
    //printf("-----------\n");
}