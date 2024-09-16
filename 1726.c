#include <stdio.h>
int a[100][100], vis[4][100][100], q[3][40100];
int n, m, qind;
void qput(int t, int tt, int ttt) {
    vis[ttt][t][tt]=1;
    q[0][qind]=t;
    q[1][qind]=tt;
    q[2][qind++]=ttt;
}
void scan(int* t) {
    for(int i=0;i<3;i++) {
        scanf("%d", &t[i]);
        t[i]--;
    }
    switch(t[2]) {
    case 3:
        t[2]=0;
        break;
    case 0:
        t[2]=1;
        break;
    case 2:
        t[2]=2;
        break;
    case 1:
        t[2]=3;
        break;
    default:
        break;
    }
}
int chk(int y, int x, int d) {
    if(y>=0&&x>=0&&y<n&&x<m&&!a[y][x]&&!vis[d][y][x]) return 1;
    else return 0;
}
int bfs(int* sta, int* end) {
    int ind=0, i=0;
    qput(sta[0], sta[1], sta[2]);
    for(int cnt=0;ind<qind;cnt++) {
        for(ind=qind;i<ind;i++) {
            int y=q[0][i], x=q[1][i], d=q[2][i];
            int dx=(d%2?(d/2?-1:1):0), dy=(!(d%2)?(d/2?1:-1):0);
            if(y==end[0]&&x==end[1]&&d==end[2]) 
                return cnt;
            if(!vis[(d+1)%4][y][x]) qput(y, x, (d+1)%4);
            if(!vis[(d+3)%4][y][x]) qput(y, x, (d+3)%4);
            if(chk(y+dy*3, x+dx*3, d)&&!a[y+dy*2][x+dx*2]&&!a[y+dy][x+dx]) qput(y+dy*3, x+dx*3, d);
            if(chk(y+dy*2, x+dx*2, d)&&!a[y+dy][x+dx]) qput(y+dy*2, x+dx*2, d);
            if(chk(y+dy, x+dx, d)) qput(y+dy, x+dx, d);
        }
    }
}
int main() {
    int sta[3], end[3];
    scanf("%d %d", &n, &m);
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            scanf("%d", &a[i][j]);
        }
    }  
    scan(sta); scan(end); 
    printf("%d", bfs(sta, end));
}