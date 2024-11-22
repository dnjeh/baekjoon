#include <stdio.h>
int a[50][50], vis[50][50][50][50], q[6][6260000], qind;

void qput(int ay, int ax, int by, int bx, int dir, int pre, int now) {
    if(vis[ay][ax][by][bx]==now) return;
    vis[ay][ax][by][bx]=now;
    q[0][qind]=ay;
    q[1][qind]=ax;
    q[2][qind]=by;
    q[3][qind]=bx;
    q[4][qind]=dir;
    q[5][qind++]=pre;
}
void go(int now) {
    char t;
    if(!now) return;
    go(q[5][now]);
    switch(q[4][now]) {
    case 1: t='N'; break;
    case 2: t='E'; break;
    case 3: t='S'; break;
    case 4: t='W'; break;
    default: break;
    }
    printf("%c", t);
}
int fun(int ay, int ax, int by, int bx, int dy, int dx, int n, int m) {
    int bay=ay, bax=ax, bby=by, bbx=bx;
    ay=(ay+dy+n)%n;
    ax=(ax+dx+m)%m;
    if(a[ay][ax]>0) {
        ay=(ay-dy+n)%n;
        ax=(ax-dx+m)%m;
    }
    by=(by+dy+n)%n;
    bx=(bx+dx+m)%m;
    if(a[by][bx]>0) {
        by=(by-dy+n)%n;
        bx=(bx-dx+m)%m;
    }
    return ay*100*100*100+ax*100*100+by*100+bx;
}
void bfs(int ay, int ax, int by, int bx, int now, int n, int m) {
    int ret, ind, i, f=0;
    qind=0;
    qput(ay, ax, by, bx, 0, 0, now);
    for(ret=ind=i=0;ind<qind&&!f;ret++) {
        for(ind=qind;i<ind&&!f;i++) {
            ay=q[0][i]; ax=q[1][i]; by=q[2][i]; bx=q[3][i];
            if(ay==by&&ax==bx) 
                f=1;
            else if(!a[ay][ax]&&!a[by][bx]) for(int d=0;d<4;d++) {
                int dy=!(d%2)?d/2?1:-1:0, dx=d%2?d/2?-1:1:0;
                int res=fun(ay, ax, by, bx, dy, dx, n, m);
                qput(res/100/100/100, res/100/100%100, res/100%100, res%100, d+1, i, now);
            }
        }
    }
    //for(int i=0;i<qind;i++) {
    //    printf("ay: %d / ax: %d / by: %d / bx: %d / now: %d\n", q[0][i], q[1][i], q[2][i], q[3][i], q[5][i]);
    //}
    if(!f) {
        printf("IMPOSSIBLE\n");
        return;
    }
    printf("%d ", ret-1);
    go(i-1);
    printf("\n");
}
void inita(int n, int m);
int main() {
    int T, n, m, it[4], itind=0;
    scanf("%d", &T);
    for(int i=1;i<=T;i++) {
        scanf("%d %d", &n, &m);
        inita(n, m);
        itind=0;
        char t[55];
        for(int j=0;j<n;j++) {
            scanf("%s", t);
            for(int k=0;k<m;k++) {
                if(t[k]=='P') {
                    it[itind*2]=j;
                    it[itind*2+1]=k;
                    itind++;    
                }
                else if(t[k]=='X') a[j][k]=1;
                else if(t[k]=='G') a[j][k]=-1;
            }
        }
        bfs(it[0], it[1], it[2], it[3], i, n, m);
    }
}

void inita(int n, int m) {
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            a[i][j]=0;
        }
    }
}