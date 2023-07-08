#include <stdio.h>
int a[1000][1000], vis[1000][1000]={{2, }, }, q[2000200][3]={{0, 0, 1}, }; //i, j, 벽뚫가능성
int n, m;
int main() {
    int i, j, ind=1, dind=0, cnt, f=0;
    scanf("%d %d", &n, &m);
    for(i=0;i<n;i++) {
        for(j=0;j<m;j++) {
            scanf("%1d", &a[i][j]);
        }
    }
    for(i=cnt=0;!f&&dind<ind;cnt++) {
        for(dind=ind;i<dind&&!f;i++) {
            if(q[i][0]==n-1&&q[i][1]==m-1) f=1;
            else {
                if(q[i][0]+1<n&&vis[q[i][0]+1][q[i][1]]<=q[i][2]&&((!a[q[i][0]+1][q[i][1]])||q[i][2])) {
                    q[ind][0]=q[i][0]+1; q[ind][1]=q[i][1];
                    q[ind][2]=!a[q[i][0]+1][q[i][1]]?q[i][2]:0;
                    vis[q[i][0]+1][q[i][1]]=q[ind++][2]+1;
                }
                if(q[i][0]-1>=0&&vis[q[i][0]-1][q[i][1]]<=q[i][2]&&((!a[q[i][0]-1][q[i][1]])||q[i][2])) {
                    q[ind][0]=q[i][0]-1; q[ind][1]=q[i][1];
                    q[ind][2]=!a[q[i][0]-1][q[i][1]]?q[i][2]:0;
                    vis[q[i][0]-1][q[i][1]]=q[ind++][2]+1;
                }
                if(q[i][1]+1<m&&vis[q[i][0]][q[i][1]+1]<=q[i][2]&&((!a[q[i][0]][q[i][1]+1])||q[i][2])) {
                    q[ind][0]=q[i][0]; q[ind][1]=q[i][1]+1;
                    q[ind][2]=!a[q[i][0]][q[i][1]+1]?q[i][2]:0;
                    vis[q[i][0]][q[i][1]+1]=q[ind++][2]+1;
                }
                if(q[i][1]-1>=0&&vis[q[i][0]][q[i][1]-1]<=q[i][2]&&((!a[q[i][0]][q[i][1]-1])||q[i][2])) {
                    q[ind][0]=q[i][0]; q[ind][1]=q[i][1]-1;
                    q[ind][2]=!a[q[i][0]][q[i][1]-1]?q[i][2]:0;
                    vis[q[i][0]][q[i][1]-1]=q[ind++][2]+1;
                }
            }
        }   
    }
    printf("%d", f?cnt:-1);
}