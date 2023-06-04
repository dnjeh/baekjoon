#include <stdio.h>
int a[100][100][100], b[1002000][3];
int n, m, h, dzero, zero, ind, cnt, f, daind, aind;
int main() {
    int i, j, k;
    scanf("%d %d %d", &m, &n, &h);
    for(k=0;k<h;k++) {
        for(i=0;i<n;i++) {
            for(j=0;j<m;j++) {
                scanf("%d", &a[i][j][k]);
                if(!a[i][j][k]) {
                    zero++;
                }
                else if(a[i][j][k]==1) {
                    b[ind][0]=i;
                    b[ind][1]=j;
                    b[ind++][2]=k;
                }
            }
        }
    }
    if(!zero) f=1;
    for(cnt=0;!f;cnt++) {
        dzero=zero;
        for(daind=ind;!f&&aind<daind;aind++) {
            if(zero<=0) f=1;
            else {  
                if(b[aind][0]+1<n&&!a[b[aind][0]+1][b[aind][1]][b[aind][2]]) {
                    b[ind][0]=b[aind][0]+1;
                    b[ind][1]=b[aind][1];
                    b[ind++][2]=b[aind][2];
                    a[b[aind][0]+1][b[aind][1]][b[aind][2]]=1; zero--;
                }
                if(b[aind][0]-1>=0&&!a[b[aind][0]-1][b[aind][1]][b[aind][2]]) {
                    b[ind][0]=b[aind][0]-1;
                    b[ind][1]=b[aind][1];
                    b[ind++][2]=b[aind][2];
                    a[b[aind][0]-1][b[aind][1]][b[aind][2]]=1; zero--;
                }
                if(b[aind][1]+1<m&&!a[b[aind][0]][b[aind][1]+1][b[aind][2]]) {
                    b[ind][0]=b[aind][0];
                    b[ind][1]=b[aind][1]+1;
                    b[ind++][2]=b[aind][2];
                    a[b[aind][0]][b[aind][1]+1][b[aind][2]]=1; zero--;
                }
                if(b[aind][1]-1>=0&&!a[b[aind][0]][b[aind][1]-1][b[aind][2]]) {
                    b[ind][0]=b[aind][0];
                    b[ind][1]=b[aind][1]-1;
                    b[ind++][2]=b[aind][2];
                    a[b[aind][0]][b[aind][1]-1][b[aind][2]]=1; zero--;
                }
                if(b[aind][2]+1<h&&!a[b[aind][0]][b[aind][1]][b[aind][2]+1]) {
                    b[ind][0]=b[aind][0];
                    b[ind][1]=b[aind][1];
                    b[ind++][2]=b[aind][2]+1;
                    a[b[aind][0]][b[aind][1]][b[aind][2]+1]=1; zero--;
                }
                if(b[aind][2]-1>=0&&!a[b[aind][0]][b[aind][1]][b[aind][2]-1]) {
                    b[ind][0]=b[aind][0];
                    b[ind][1]=b[aind][1];
                    b[ind++][2]=b[aind][2]-1;
                    a[b[aind][0]][b[aind][1]][b[aind][2]-1]=1; zero--;
                }
            }
            if(zero<=0) f=1;
        }
        if(!f&&dzero<=zero) {
            printf("-1");
            return 0;
        }
    }
    printf("%d", cnt);
}