#include <stdio.h>
int a[500][500], b[500][500], n;
int dp(int y, int x) {
    int ret, t;
    if(b[y][x]!=-1) ret=b[y][x];
    else {
        ret=a[y][x];
        if(y-1>=0&&x-1>=0) ret=dp(y-1, x-1)+a[y][x];
        if(y-1>=x&&((t=dp(y-1, x))+a[y][x]>ret)) ret=t+a[y][x];
        b[y][x]=ret;
    }
    return ret;
}
int main() {
    int i, j, max=0;
    scanf("%d", &n);
    for(i=0;i<n;i++) {
        for(j=0;j<=i;j++) {
            scanf("%d", &a[i][j]);
            b[i][j]=-1;
        }
    }
    for(i=0;i<n;i++) {
        if(!i||max<dp(n-1, i)) max=dp(n-1, i);
    }
    printf("%d", max);
}