#include <stdio.h>
int vis[15][15], q[1000][2], ind;
int a[15][15], temp[3][2], n, m, d, now[3];
void qput(int y, int x) {
    q[ind][0]=y;
    q[ind++][1]=x;
}
int chk(int y, int x, int t) {
    if(y+t<n&&x<m&&y<d&&!vis[y+t][x]&&a[y+t][x]) return 1;
    else return 0;
}
int bfs(int t, int tt) {
    int i, j, x, y; ind=0;
    for(i=0;i<n;i++) for(j=0;j<m;j++) vis[i][j]=0;
    qput(0, 0);
    for(i=0;i<ind;i++) {
        y=q[i][0], x=q[i][1];
        if(chk(y, x-1+tt, t)) qput(y, x-1);
        if(chk(y+1, x+tt, t)) qput(y+1, x);
        if(chk(y, x+1+tt, t)) qput(y, x+1);
    }
}
int deff() {
    int i, j, ret=0, t;
    for(i=0;i<n;i++) {
        for(j=0;j<3;j++) {
            t=bfs(i, now[j]);
            temp[j][0]=t/100;   
            temp[j][1]=t%100;   
        }
    }
}
int main() {
    int i, j, k, t, max;
    scanf("%d %d %d", &n, &m, &d);
    for(i=n-1;i>=0;i--) {
        for(j=0;j<m;j++) {
            scanf("%d", &a[i][j]);
        }
    }
    for(i=0;i<n;i++) {
        now[0]=i;
        for(j=i+1;j<n;j++) {
            now[1]=j;
            for(k=j+1;k<n;k++) {
                now[2]=k;
                t=deff();
                if(k==2||t>max) max=t;
            }
        }
    }
    printf("%d", max);
}