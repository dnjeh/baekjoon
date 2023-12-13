#include <stdio.h>
int now;
int a[100][100], q[2][27][10100], qind[27], vis[100][100], key[26];
int T, h, w;
void qput(int t, int tt, int ttt) {
    q[0][t][qind[t]]=tt;
    q[1][t][qind[t]]=ttt;
    qind[t]++;
}
void qqput(int y, int x) {
    int i;
    if(vis[y][x]!=now&&a[y][x]!=444) {
        if(!(a[y][x]>0&&a[y][x]<30&&!key[a[y][x]-1])&&!(a[y][x]<0&&!key[-a[y][x]-1])) {
            qput(0, y, x);
        }
        else if(a[y][x]<0&&!key[-a[y][x]-1]) {
            qput(-a[y][x], y, x);
        }
        else if(a[y][x]>0&&a[y][x]<30&&!key[a[y][x]-1]) {
            qput(0, y, x);
            key[a[y][x]-1]=1;
            for(i=0;i<qind[a[y][x]];i++) {
                qput(0, q[0][a[y][x]][i], q[1][a[y][x]][i]);
            }
        }
    }
    vis[y][x]=now;
}
void init() {
    int i, j;
    char t[110];
    for(i=0;i<=26;i++) qind[i]=0;
    scanf("%d %d", &h, &w);
    for(i=0;i<h;i++) {
        scanf("%s", t);
        for(j=0;j<w;j++) {
            if(t[j]=='*') a[i][j]=444;
            else if(t[j]=='.') a[i][j]=0;
            else if(t[j]=='$') a[i][j]=777;
            else if(t[j]<='Z') a[i][j]=-t[j]+64;
            else if(t[j]<='z') a[i][j]=t[j]-96;
        }
    }
    scanf("%s", t);
    for(i=0;i<26;i++) key[i]=0;
    if(t[0]!='0') for(i=0;t[i];i++) {
        key[t[i]-97]=1;
    }
}
int bfs() {
    int i, j, k, y, x, ret=0;
    for(i=0;i<h;i++) {
        qqput(i, 0);
        qqput(i, w-1);
    }
    for(j=0;j<w;j++) {
        qqput(0, j);
        qqput(h-1, j);
    }
    for(i=0;i<qind[0];i++) {
        y=q[0][0][i]; x=q[1][0][i];
        if(a[y][x]==777) ret++;
        if(y+1<h) qqput(y+1, x);
        if(y-1>=0) qqput(y-1, x);
        if(x+1<w) qqput(y, x+1);
        if(x-1>=0) qqput(y, x-1);
    }
    return ret;
}
int main() {
    int i, j;
    char t[110];
    scanf("%d", &T);
    for(now=1;now<=T;now++) {
        init();
        printf("%d\n", bfs());
    }
}