#include <stdio.h>
#define LL long long
#define MOD 1000003
int a[3][MOD], acnt;
void mod(LL int *t, LL int tt) {
    *t=(tt%MOD);
}
int fun(int t, int tt) {
    LL int ret=5381;
    for(int i=0;;i++) {
        mod(&ret, ret*33+t);
        mod(&ret, ret*33+tt);
        if(!a[0][ret]||a[0][ret]==t&&a[1][ret]==tt) break;
    }
    if(!a[0][ret]) {
        a[0][ret]=t;
        a[1][ret]=tt;
        acnt++;
    }
    return ret;
}
int main() {
    LL int h, w, n, t, tt;
    scanf("%lld %lld %lld", &h, &w, &n);
    LL int b[10]={(h-2)*(w-2), };
    for(int k=0;k<n;k++) {
        scanf("%lld %lld", &t, &tt);
        for(LL int i=t-2;i<=t;i++) {
            for(LL int j=tt-2;j<=tt;j++) {
                if(i>=1&&j>=1&&i<=h-2&&j<=w-2) {
                    b[a[2][fun(i, j)]++]--;
                    b[a[2][fun(i, j)]]++;
                }
            }
        }
    }
    for(int i=0;i<10;i++) {
        printf("%lld\n", b[i]);
    }
}