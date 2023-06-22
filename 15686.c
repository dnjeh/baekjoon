#include <stdio.h>

int a[50][50], b[13][2], c[13][2], n, m, min, ind, f;

int bs(int _t) { return _t<0?_t*-1:_t; }

void extend() {
    int i, j, k, sum=0, tmin, t;
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            if(a[i][j]) {
                for(k=0, tmin=0;k<m;k++) {
                    t=bs(i-c[k][0])+bs(j-c[k][1]);
                    if(!k||t<tmin) tmin=t;
                }
                sum+=tmin;
            }
        }
    }
    if(!f||sum<min) {
        f=1;
        min=sum;
    }
}
void find(int cnt, int min) {
    int tt;
    if(cnt==m) extend();
    else for(int i=min;i<ind;i++) {
        if(b[i][0]!=-1) {
            c[cnt][0]=tt=b[i][0];
            c[cnt][1]=b[i][1];
            b[i][0]=-1;
            find(cnt+1, i);
            b[i][0]=tt;
        }
    }
}

int main() {
    int i, j;
    scanf("%d %d", &n, &m);
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            scanf("%d", &a[i][j]);
            if(a[i][j]==2) {
                b[ind][0]=i;
                b[ind++][1]=j;
                a[i][j]=0;
            }
        }
    }
    find(0, 0);
    printf("%d", min);
}