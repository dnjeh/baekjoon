#include <stdio.h>

long long int fun(long long int t) {
    return __builtin_popcountll(t);
}

int main() {
    long long int nn, n, k, t, tcnt;
    scanf("%lld %lld", &n, &k);
    t=fun(nn=n);
    if(t>k) for(long long int i=1LL;(t=fun(n))>k;i<<=1LL) {
        n&=~i;
    }
    if(t==k) for(long long int i=1LL;n<=nn;i<<=1LL) {
        if(!(n&(i<<1LL))&&(n&i)) {
            n&=~((i<<1LL)-1LL);
            n|=(i<<1LL);
            break;
        }
    }
    for(long long int i=1LL;fun(n)<k;i<<=1LL) {
        n|=i;
    }
    printf("%lld", n);
    return 0;
}
