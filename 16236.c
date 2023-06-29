#include <stdio.h>
int a[20][20], n, x, y, sum, siz=2, expp=0;
int bfs() {
    int q[410][2]={{y, x}, }, vis[20][20]={{0, }, }, i=0, ind=1, dind=0, cnt, f=0, t=-1;
    vis[y][x]=1;
    for(i=cnt=0;!f&&dind<ind;cnt++) {
        for(dind=ind;i<dind;i++) {
            if(a[q[i][0]][q[i][1]]&&a[q[i][0]][q[i][1]]<siz) {
                if(t==-1||t>q[i][0]*100+q[i][1]) t=q[i][0]*100+q[i][1];
                f=1;
            }
            else {
                if(q[i][0]-1>=0&&!vis[q[i][0]-1][q[i][1]]&&a[q[i][0]-1][q[i][1]]<=siz) {
                    q[ind][0]=q[i][0]-1;
                    q[ind++][1]=q[i][1];
                    vis[q[i][0]-1][q[i][1]]=1;
                }
                if(q[i][1]-1>=0&&!vis[q[i][0]][q[i][1]-1]&&a[q[i][0]][q[i][1]-1]<=siz) {
                    q[ind][0]=q[i][0];
                    q[ind++][1]=q[i][1]-1;
                    vis[q[i][0]][q[i][1]-1]=1;
                }
                if(q[i][1]+1<n&&!vis[q[i][0]][q[i][1]+1]&&a[q[i][0]][q[i][1]+1]<=siz) {
                    q[ind][0]=q[i][0];
                    q[ind++][1]=q[i][1]+1;
                    vis[q[i][0]][q[i][1]+1]=1;
                }
                if(q[i][0]+1<n&&!vis[q[i][0]+1][q[i][1]]&&a[q[i][0]+1][q[i][1]]<=siz) {
                    q[ind][0]=q[i][0]+1;
                    q[ind++][1]=q[i][1];
                    vis[q[i][0]+1][q[i][1]]=1;
                }
            }
        }
    }
    if(f) {
        a[t/100][t%100]=0;
        y=t/100; x=t%100;
        return cnt-1;
    }
    else return 0;
}
int main() {
    int i, j, t;
    scanf("%d", &n);
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            scanf("%d", &a[i][j]);
            if(a[i][j]==9) {
                y=i; x=j;
                a[i][j]=0;
            }
        }
    }
    for(t=bfs();t;t=bfs()) {
        expp++;
        if(expp>=siz) {
            expp-=siz;
            siz++;
        }
        sum+=t;
    }
    printf("%d", sum);
}