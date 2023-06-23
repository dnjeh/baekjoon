#include <stdio.h>

int a[8][8], b[10][2], n, m, min, ind, f, zero;
int (*v)[8];

int fs(int _i, int _j) {
    int ret=1;
    v[_i][_j]=1;
    if(_i-1>=0&&!v[_i-1][_j]&&!a[_i-1][_j]) { ret+=fs(_i-1, _j); }
    if(_i+1<n&&!v[_i+1][_j]&&!a[_i+1][_j]) { ret+=fs(_i+1, _j); }
    if(_j-1>=0&&!v[_i][_j-1]&&!a[_i][_j-1]) { ret+=fs(_i, _j-1); }
    if(_j+1<m&&!v[_i][_j+1]&&!a[_i][_j+1]) { ret+=fs(_i, _j+1); }
    return ret;
}

void extend() {
    int tsum=0, t[8][8]={0, };
    v=t;
    for(int i=0;i<ind;i++) {
        tsum+=fs(b[i][0], b[i][1])-1;
    }
    if(!f||tsum<min) {
        //printf("갱신됨! : %d\n", tsum);
        min=tsum;
        f=1;
    }
}

void find(int cnt, int mini, int minj) {
    if(cnt==3) extend();
    else for(int i=mini;i<n;i++) {
        for(int j=((i==mini)?minj:0);j<m;j++) {
            if(!a[i][j]) {
                a[i][j]=1;
                find(cnt+1, i, j);
                a[i][j]=0;
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
            }
            if(!a[i][j]) {
                zero++;
            }
        }
    }
    find(0, 0, 0);
    printf("%d", zero-min-3);
}
