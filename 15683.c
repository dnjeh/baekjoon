#include <stdio.h>
int a[8][8], b[8], c[8][8], n, m, min, cct, f, now=1;
int chk(int y, int x) { return (a[y][x]&&a[y][x]<6); }
int xy(int t) {
    switch(t) {
    case 0:
        return 1;
        break;
    case 2:
        return -1;
        break;
    default:
        return 0;
        break;
    }
}
int na(int a, int b) { return (a+b)%4; }
void dfs(int y, int x, int dy, int dx) {
    c[y][x]=now;
    if(y+dy>=0&&y+dy<n&&x+dx>=0&&x+dx<m&&a[y+dy][x+dx]<6) 
        dfs(y+dy, x+dx, dy, dx); 
}
int ddfs() {
    int i, j, ret=0, ind=0;
    for(i=0;i<n;i++) {
        for(j=0;j<m;j++) {
            if(chk(i,j)) {
                dfs(i,j,xy(b[ind]),xy(na(b[ind], 1)));
                if(a[i][j]==2||a[i][j]==5) dfs(i,j,xy(na(b[ind],2)),xy(na(b[ind],3)));
                if(a[i][j]>2) {
                    dfs(i,j,xy(na(b[ind],1)),xy(na(b[ind],2)));
                    if(a[i][j]>3) dfs(i,j,xy(na(b[ind],3)),xy(na(b[ind],4)));
                }
                ind++;
            }
        }
    }
    for(i=0;i<n;i++) {
        for(j=0;j<m;j++) {
            if(a[i][j]!=6&&c[i][j]<now) ret++;
        }
    }
    return ret;
}
void bak(int cnt) {
    int t, i;
    if(cnt>=cct) {
        t=ddfs();
        if(!f||t<min) {
            min=t;
            f=1;
        }
    }
    else {
        for(i=0;i<4;i++) {
            b[cnt]=i;
            bak(cnt+1);
            now++;
        }
    }
}
int main() {
    int i, j;
    scanf("%d %d", &n, &m);
    for(i=0;i<n;i++) {
        for(j=0;j<m;j++) {
            scanf("%d", &a[i][j]);
            if(chk(i,j)) cct++;
        }
    }
    bak(0);
    printf("%d", min);
}