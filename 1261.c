#include <stdio.h>
int a[100][100], vis[100][100], n, m, q[1000100][3], ind;
void set(); 
void pot(int y, int x, int bre) {
    q[ind][0]=y;
    q[ind][1]=x;
    q[ind++][2]=bre;
    vis[y][x]=bre;
}
int chk(int y, int x, int bre) {
    int ret=0;
    if(y>=0&&y<n&&x>=0&&x<m) {
        if(vis[y][x]==-1) ret=1;
        else if(!a[y][x]&&vis[y][x]>bre) ret=1;
        else if(a[y][x]&&(vis[y][x]>bre+1)) ret=1;
    }
    return ret;
}
int main() {
    int i, j, y, x, b;
    scanf("%d %d", &m, &n);
    set();
    for(i=0;i<n;i++) {
        for(j=0;j<m;j++) {
            scanf("%01d", &a[i][j]);
        }
    }
    pot(0, 0, 0);
    for(i=0;i<ind;i++) {
        y=q[i][0]; x=q[i][1]; b=q[i][2];
        if(chk(y-1, x, b)) {
            if(a[y-1][x]) pot(y-1, x, b+1);
            else pot(y-1, x, b);
        }
        if(chk(y+1, x, b)) {
            if(a[y+1][x]) pot(y+1, x, b+1);
            else pot(y+1, x, b);
        }
        if(chk(y, x-1, b)) {
            if(a[y][x-1]) pot(y, x-1, b+1);
            else pot(y, x-1, b);
        }
        if(chk(y, x+1, b)) {
            if(a[y][x+1]) pot(y, x+1, b+1);
            else pot(y, x+1, b);
        }
    }
    printf("%d", vis[n-1][m-1]);
}

void set() {
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            vis[i][j]=-1;
        }
    }
}