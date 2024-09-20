#include <stdio.h>
int fun(int t) {
    int cnt=0;
    for(;t;t>>=1) cnt+=t&1;
    return cnt;
}
int main() {
    int a[3][10], tmax[3], max=0;
    int T, n;
    scanf("%d", &T);
    for(int i=0;i<T;i++) {
        max=0;
        scanf("%d", &n);
        for(int j=0;j<n;j++) {
            for(int k=0;k<3;k++) {
                scanf("%d", &a[k][j]);
            }
        }
        for(int j=0;j<(1<<n);j++) {
            for(int k=0;k<3;k++) tmax[k]=0;
            for(int k=0;k<n;k++) {
                if(j&(1<<k)) {
                    for(int ii=0;ii<3;ii++) {
                        if(tmax[ii]<a[ii][k]) tmax[ii]=a[ii][k];
                    }
                }
            }
            if(tmax[0]+tmax[1]+tmax[2]<=10000&&max<fun(j)) max=fun(j);
        }
        printf("Case #%d: %d\n", i+1, max);
    }
}