#include <stdio.h>
int a[1000][1000], vis[2][11][1000][1000], q[23000000][3]; //i, j, 벽뚫가능성
int n, m, k, ind;
void qput(int t, int tt, int ttt, int tttt) {
    q[ind][0]=t; q[ind][1]=tt; q[ind++][2]=ttt;
    vis[tttt][ttt][t][tt]=1;
}
int main() {
    int i, j, dind=0, cnt, f=0, ff, y, x, s;
    scanf("%d %d %d", &n, &m, &k);
    qput(0, 0, k, 0);
    for(i=0;i<n;i++) {
        for(j=0;j<m;j++) {
            scanf("%01d", &a[i][j]);
        }
    }
    for(i=cnt=0;!f&&dind<ind;cnt++) {
        for(dind=ind;i<dind&&!f;i++) {
            y=q[i][0]; x=q[i][1]; s=q[i][2]; ff=1;
            if(y==n-1&&x==m-1) f=1;
            else {
                if(y+1<n&&!vis[(cnt+1)%2][s][y+1][x]&&((!a[y+1][x])||((ff=!(cnt%2))&&s>0))) {
                    qput(y+1, x, !a[y+1][x]?s:s-1, (cnt+1)%2);
                }
                if(y-1>=0&&!vis[(cnt+1)%2][s][y-1][x]&&((!a[y-1][x])||((ff=!(cnt%2))&&s>0))) {
                    qput(y-1, x, !a[y-1][x]?s:s-1, (cnt+1)%2);
                }
                if(x+1<m&&!vis[(cnt+1)%2][s][y][x+1]&&((!a[y][x+1])||((ff=!(cnt%2))&&s>0))) {
                    qput(y, x+1, !a[y][x+1]?s:s-1, (cnt+1)%2);
                }
                if(x-1>=0&&!vis[(cnt+1)%2][s][y][x-1]&&((!a[y][x-1])||((ff=!(cnt%2))&&s>0))) {
                    qput(y, x-1, !a[y][x-1]?s:s-1, (cnt+1)%2);
                }
                if(!ff&&!vis[(cnt+1)%2][s][y][x]) qput(y, x, s, (cnt+1)%2);
            }
        }   
    }
    printf("%d", f?cnt:-1);
}