#include <stdio.h>
int a[1000][1000], mem[1000][1000], n, m;
void set();
int fm(int t, int tt) {
    return t<tt?t:tt;
}
int dp(int y, int x) {
    int ret=0, t=0, tt=0, ttt=0;
    if(mem[y][x]!=-1) ret=mem[y][x];
    else {
        if(a[y][x]) {
            if(y-1>=0) t=dp(y-1, x);
            if(x-1>=0) tt=dp(y, x-1);
            if(y-1>=0&&x-1>=0) ttt=dp(y-1, x-1);
            ret=fm(fm(t, tt), ttt)+1;
        }
        mem[y][x]=ret;
    }
    return ret;
}
int main() {
    int i, j, max=0, t;
    scanf("%d %d", &n, &m);
    set();
    for(i=0;i<n;i++) {
        for(j=0;j<m;j++) {
            scanf("%1d", &a[i][j]);
        }
    }
    for(i=0;i<n;i++) {
        for(j=0;j<m;j++) {
            if(max<(t=dp(i, j))) max=t;
        }
    }
    printf("%d", max*max);
}
void set() {
    int i, j;
    for(i=0;i<n;i++) for(j=0;j<m;j++) {
        mem[i][j]=-1;
    }
}