#include <stdio.h>
int a[1000][1000], b[1000][1000], q[1000100][2], n, m, ind, dind;
int main() {
    int i, j;
    scanf("%d %d", &n, &m);
    for(i=0;i<n;i++) {
        for(j=0;j<m;j++) {
            scanf("%d", &a[i][j]);
            if(a[i][j]==2) {
                a[i][j]=0;
                q[ind][0]=i; q[ind++][1]=j;
            }
        }
    }
    for(j=i=0;dind<ind;i++) {
        for(dind=ind;j<dind;j++) {
            b[q[j][0]][q[j][1]]=i;
            if(q[j][0]+1<n&&a[q[j][0]+1][q[j][1]]) {
                a[q[j][0]+1][q[j][1]]=0;
                q[ind][0]=q[j][0]+1;
                q[ind++][1]=q[j][1];
            }
            if(q[j][0]-1>=0&&a[q[j][0]-1][q[j][1]]) {
                a[q[j][0]-1][q[j][1]]=0;
                q[ind][0]=q[j][0]-1;
                q[ind++][1]=q[j][1];
            }
            if(q[j][1]+1<m&&a[q[j][0]][q[j][1]+1]) {
                a[q[j][0]][q[j][1]+1]=0;
                q[ind][0]=q[j][0];
                q[ind++][1]=q[j][1]+1;
            }
            if(q[j][1]-1>=0&&a[q[j][0]][q[j][1]-1]) {
                a[q[j][0]][q[j][1]-1]=0;
                q[ind][0]=q[j][0];
                q[ind++][1]=q[j][1]-1;
            }
        }
    }
    for(i=0;i<n;i++) {
        for(j=0;j<m;j++) {
            printf("%d ", a[i][j]?-1:b[i][j]);
        }
        printf("\n");
    }
}