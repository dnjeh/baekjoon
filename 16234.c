#include <stdio.h>
int a[50][50], n, l, r, vis[50][50], q[3000][2];
void set();
int par(int y, int x, int dy, int dx) {
    int t=a[y][x]-a[dy][dx]; 
    if(t<0) t*=-1;
    if(t>=l&&t<=r) return 1;
    else return 0;
}
int bfs(int y, int x) {
    int ind=1, i, _x, _y, sum=0, cal; q[0][0]=y; q[0][1]=x;
    vis[y][x]=1;
    for(i=0;i<ind;i++) {
        _y=q[i][0]; _x=q[i][1];
        sum+=a[_y][_x];
        if(_x-1>=0&&!vis[_y][_x-1]&&par(_y, _x, _y, _x-1)) {
            q[ind][0]=_y;
            q[ind++][1]=_x-1;
            vis[_y][_x-1]=1;
        }
        if(_y-1>=0&&!vis[_y-1][_x]&&par(_y, _x, _y-1, _x)) {
            q[ind][0]=_y-1;
            q[ind++][1]=_x;
            vis[_y-1][_x]=1;
        }
        if(_x+1<n&&!vis[_y][_x+1]&&par(_y, _x, _y, _x+1)) {
            q[ind][0]=_y;
            q[ind++][1]=_x+1;
            vis[_y][_x+1]=1;
        }
        if(_y+1<n&&!vis[_y+1][_x]&&par(_y, _x, _y+1, _x)) {
            q[ind][0]=_y+1;
            q[ind++][1]=_x;
            vis[_y+1][_x]=1;
        }
    } cal=sum/ind;
    for(i=0;i<ind;i++) a[q[i][0]][q[i][1]]=cal;
    if(ind!=1) return 1;
    else return 0;
}
int main() {
    int i, j, d, f=1;
    scanf("%d %d %d", &n, &l, &r);
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            scanf("%d", &a[i][j]);
        }
    }
    for(d=0;f;d++) {
        f=0;
        set();
        for(i=0;i<n;i++) for(j=0;j<n;j++) {
            if(!vis[i][j]) {
                f+=bfs(i, j);
            }
        }
    }
    printf("%d", d-1);
}

void set() {
    for(int i=0;i<n;i++) for(int j=0;j<n;j++) {
        vis[i][j]=0;
    }
}