#include <stdio.h>

int a[8][8], b[10][2], n, m, min, ind, f, zero;


int bfs(int _i, int _j) {
    
}

void extend() {
    int tsum=0;
    for(int i=0;i<ind;i++) {
        tsum+=bfs(b[i][0], b[i][1]);
    }
}

void find(int cnt, int mini, int minj) {
    if(cnt==3) extend();
    else for(int i=mini;i<n;i++) {
        for(int j=minj;j<m;j++) {
            if(!a[i][j]) {
                a[i][j]=1;
                find(cnt+1, i, j);
                b[i][j]=0;
            }
        }
    }
}

int main() {
    int i, j;
    scanf("%d %d", &n, &m);
    for(i=0;i<n;i++) {
        for(j=0;j<m;j++) {
            scanf("%d", &a[i][j]);
            if(a[i][j]==2) {
                b[ind][0]=i;
                b[ind++][1]=j;
                a[i][j]=0;
            }
            if(!a[i][j]) {
                zero++;
            }
        }
    }
    find(0, 0, 0);
    printf("%d", min);
}
