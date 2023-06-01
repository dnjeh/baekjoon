#include <stdio.h>
int a[1000][1000], b[1001000][2];
int n, m, dzero, zero, ind, cnt, f, daind, aind;
int main() {
    int i, j;
    scanf("%d %d", &m, &n);
    for(i=0;i<n;i++) {
        for(j=0;j<m;j++) {
            scanf("%d", &a[i][j]);
            if(!a[i][j]) {
                zero++;
            }
            else if(a[i][j]==1) {
                b[ind][0]=i;
                b[ind++][1]=j;
            }
        }
    }
    if(!zero) f=1;
    for(cnt=0;!f;cnt++) {
        dzero=zero;
        for(daind=ind;!f&&aind<daind;aind++) {
            if(zero<=0) f=1;
            else {  
                if(b[aind][0]+1<n&&!a[b[aind][0]+1][b[aind][1]]) {
                    b[ind][0]=b[aind][0]+1;
                    b[ind++][1]=b[aind][1];
                    a[b[aind][0]+1][b[aind][1]]=1; zero--;
                }
                if(b[aind][0]-1>=0&&!a[b[aind][0]-1][b[aind][1]]) {
                    b[ind][0]=b[aind][0]-1;
                    b[ind++][1]=b[aind][1];
                    a[b[aind][0]-1][b[aind][1]]=1; zero--;
                }
                if(b[aind][1]+1<m&&!a[b[aind][0]][b[aind][1]+1]) {
                    b[ind][0]=b[aind][0];
                    b[ind++][1]=b[aind][1]+1;
                    a[b[aind][0]][b[aind][1]+1]=1; zero--;
                }
                if(b[aind][1]-1>=0&&!a[b[aind][0]][b[aind][1]-1]) {
                    b[ind][0]=b[aind][0];
                    b[ind++][1]=b[aind][1]-1;
                    a[b[aind][0]][b[aind][1]-1]=1; zero--;
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