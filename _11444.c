#include <stdio.h>
#define LL long long 
#define MOD 1000000007
LL int mod(LL int t) {
    return t%MOD;
}
int fun(LL int t, LL int tt[][2]) {
    if(t==1) {
        tt[0][0]=0;
        tt[0][1]=tt[1][0]=1;
        tt[1][1]=1;
        return 0;
    }
    LL int _a[2][2]={{0, }}, _b[2][2]={{0, }};
    fun(t/(LL int)2, _a); 
    fun(t/(LL int)2+t%(LL int)2, _b);
    tt[0][0]=mod(mod(_a[0][0]*_b[0][0])+mod(_a[0][1]*_b[1][0]));
    tt[0][1]=mod(mod(_a[0][0]*_b[0][1])+mod(_a[0][1]*_b[1][1]));
    tt[1][0]=mod(mod(_a[1][0]*_b[0][0])+mod(_a[1][1]*_b[1][0]));
    tt[1][1]=mod(mod(_a[1][0]*_b[0][1])+mod(_a[1][1]*_b[1][1]));
    return tt[0][1];
}
int main() {
    LL int a[2][2];
    LL int n;
    scanf("%lld", &n);
    printf("%lld", fun(n, a));
}