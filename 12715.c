#include <stdio.h>
int mem[1010]={1, };
int dp(long long int *b, int t) {
    int ret=1;
    if(mem[t]) ret=mem[t];
    else {
        for(int i=0;i<t;i++) {
            if(b[i]<b[t]) ret=(ret+dp(b, i))%1000000007;
        }
        mem[t]=ret;
    }
    return ret;
}
int dpw(long long int* b, int n) {
    int ret=0;
    for(int i=0;i<n;i++) {
        ret=(dp(b, i)+ret)%1000000007;
    }
    return ret;
}
int main() {
    long long int a[1010], b[1010];
    long long int T, n, m, x, y, z;
    scanf("%lld", &T);
    for(long long int i=0;i<T;i++) {
        mem[0]=1;
        for(int j=1;j<1010;j++) mem[j]=0;
        scanf("%lld %lld %lld %lld %lld", &n, &m, &x, &y, &z);
        for(long long int j=0;j<m;j++) {
            scanf("%lld", &a[j]);
        }
        for(long long int j=0;j<n;j++) {
            b[j]=a[j%m];
            a[j%m]=(x*a[j%m]+y*(j+1LL))%z;
        }
        printf("Case #%lld: %d\n", i+1, dpw(b, n));
    }
}
