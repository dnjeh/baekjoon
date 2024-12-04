#include <stdio.h>

long long int min(long long int a, long long int b) {
    return a<b?a:b;
}

long long int fun(long long int t, long long int tt) {
    return t-tt*(tt-1)/2;
}

int main() {
    long long int n, cnt[2]={0, }, sum[2]={0, }, t;
    scanf("%lld", &n);
    for(int i=0;i<n;i++) {
        scanf("%lld", &t);
        sum[0]+=cnt[0];
        sum[1]+=cnt[1];
        cnt[t%2]++;
    }
    printf("%lld", min(fun(sum[0], cnt[0]), fun(sum[1], cnt[1])));
    return 0;
}
