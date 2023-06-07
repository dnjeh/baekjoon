#include <stdio.h>
int a[100][100], n, m, q[10100][2], f;
int main() {
    int i, j, ind=0, dind, cnt;
    scanf("%d %d", &n, &m);
    for(i=0;i<n;i++) {
        for(j=0;j<m;j++) {
            scanf("%1d", &a[i][j]);
        }
    }
    a[0][0]=0;
    q[ind][0]=0; q[ind++][1]=0; 
    for(cnt=0;!f;cnt++) {
        for(dind=ind, i=0;!f&&i<dind;i++) {
            if(q[i][0]==n-1&&q[i][1]==m-1) {
                f=1;
            }
            else {
                if(q[i][1]+1<m&&a[q[i][0]][q[i][1]+1]) {
                    a[q[i][0]][q[i][1]+1]=0;
                    q[ind][0]=q[i][0];
                    q[ind++][1]=q[i][1]+1;
                }
                if(q[i][1]-1>=0&&a[q[i][0]][q[i][1]-1]) {
                    a[q[i][0]][q[i][1]-1]=0;
                    q[ind][0]=q[i][0];
                    q[ind++][1]=q[i][1]-1;
                }
                if(q[i][0]+1<n&&a[q[i][0]+1][q[i][1]]) {
                    a[q[i][0]+1][q[i][1]]=0;
                    q[ind][0]=q[i][0]+1;
                    q[ind++][1]=q[i][1];
                }
                if(q[i][0]-1>=0&&a[q[i][0]-1][q[i][1]]) {
                    a[q[i][0]-1][q[i][1]]=0;
                    q[ind][0]=q[i][0]-1;
                    q[ind++][1]=q[i][1];
                }
            }
        }
    }
    printf("%d", cnt);
}
