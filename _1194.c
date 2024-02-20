#include <stdio.h>
int n, m;
int a[50][50];
int vis[50][50][64], q[3][200000], qind;
void qput(int t, int tt, int ttt) {
    vis[tt][ttt][t]=1;
    q[0][qind]=t;
    q[1][qind]=tt;
    q[2][qind++]=ttt;
}
int chk(int key, int y, int x) {
    if(
        y>=0&&y<n&&
        x>=0&&x<m&&
        !vis[y][x][key]&&
        a[y][x]!='#'&&

    )
}
int bfs() {
    int ret, i, ind, f;
    int key, y, x;
    for(i=ret=f=0;!f&&ind<qind;ret++, ind=qind) {
        for(;!f&&i<ind;i++) {
            key=q[0][i]; y=q[1][i]; x=q[2][i];
            if(a[y][x]=='1') f=1;
            else if(chk(key, y-1, x)) qput(key, y-1, x);
            else if(chk(key, y+1, x)) qput(key, y+1, x);
            else if(chk(key, y, x-1)) qput(key, y, x-1);
            else if(chk(key, y, x+1)) qput(key, y, x+1);
        }
    }
    return ret;
}
int main() {
    char t[55];
    scanf("%d %d", &n, &m);
    for(int i=0;i<n;i++) {
        scanf("%s", t);
        for(int j=0;j<m;j++) {
            if(t[j]=='1') a[i][j]=-10;
            else if(t[j]=='0') {
                qput(0, i, j);
            }
            else if(t[j]=='#') {
                a[i][j]=0b1000000;
            }
        }
    }
    printf("%d", bfs());
}