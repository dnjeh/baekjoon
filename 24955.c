#include <stdio.h>
#define MOD 1000000007
long long int a[1001], b[1000][1010], vis[1010], now;
long long int fun(long long int t) {
    long long int ret;
    for(ret=1;t;t/=10, ret=(ret*10)%MOD) {}
    return ret;
}
long long int dfs(long long int t, long long int tt, long long int cct) {
    long long int ret=0;
    vis[t]=now;
    cct=(cct*fun(a[t]))%MOD+a[t];
    cct%=MOD;
    if(t==tt) ret=cct;
    else for(long long int i=1;i<=b[t][0];i++) {
        if(vis[b[t][i]]!=now) {
            if(ret=dfs(b[t][i], tt, cct)) break;
        }
    }
    return ret;
}
int main() {
    long long int n, q, t, tt;
    scanf("%lld %lld", &n, &q);
    for(long long int i=0;i<n;i++) {
        scanf("%lld", &a[i]);
    }
    for(long long int i=0;i<n-1;i++) {
        scanf("%lld %lld", &t, &tt);
        t--; tt--;
        b[t][++b[t][0]]=tt;
        b[tt][++b[tt][0]]=t;
    }
    for(now=1;now<=q;now++) {
        scanf("%lld %lld", &t, &tt);
        t--; tt--;
        printf("%lld\n", dfs(t, tt, 0)%MOD);
    }
}