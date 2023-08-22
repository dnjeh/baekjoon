#include <stdio.h>
int a[200][200], vis[31][200][200], q[20000200][3]; //i, j, 벽뚫가능성
int n, m, k, ind;
void qput(int t, int tt, int ttt) {
    q[ind][0]=t; q[ind][1]=tt; q[ind++][2]=ttt;
    vis[ttt][t][tt]=1;
}
int chk(int y, int x, int s) {
    if(x>=0&&x<m&&y>=0&&y<n&&!vis[s][y][x]&&!a[y][x]) return 1;
    else return 0;
}
int main() {
    int i, j, dind=0, cnt, f=0, y, x, s;
    scanf("%d %d %d", &k, &n, &m);
    qput(0, 0, k);
    for(i=0;i<n;i++) {
        for(j=0;j<m;j++) {
            scanf("%d", &a[i][j]);
        }
    }
    for(i=cnt=0;!f&&dind<ind;cnt++) {
        for(dind=ind;i<dind&&!f;i++) {
            y=q[i][0]; x=q[i][1]; s=q[i][2];
            if(y==n-1&&x==m-1) f=1;
            else {
                if(s>0) {
                    if(chk(y+1, x-2, s-1)) qput(y+1, x-2, s-1);    
                    if(chk(y+2, x-1, s-1)) qput(y+2, x-1, s-1);    
                    if(chk(y+2, x+1, s-1)) qput(y+2, x+1, s-1);    
                    if(chk(y+1, x+2, s-1)) qput(y+1, x+2, s-1);    
                    if(chk(y-1, x+2, s-1)) qput(y-1, x+2, s-1);    
                    if(chk(y-2, x+1, s-1)) qput(y-2, x+1, s-1);    
                    if(chk(y-2, x-1, s-1)) qput(y-2, x-1, s-1);    
                    if(chk(y-1, x-2, s-1)) qput(y-1, x-2, s-1);    
                }
                if(chk(y+1, x, s)) qput(y+1, x, s);
                if(chk(y-1, x, s)) qput(y-1, x, s);
                if(chk(y, x+1, s)) qput(y, x+1, s);
                if(chk(y, x-1, s)) qput(y, x-1, s);
            }
        }   
    }
    printf("%d", f?cnt:-1);
}
