#include <stdio.h>
long long int a[10], max=0LL, k, n;
void bak(long long int now, long long int m, long long int deb, long long int cnt) {
    //printf("%d: %lld\n", now, m);
    if(now>=n) {
        if(max<m) max=m;
        return;
    }
    else {
        bak(now+1LL, m+cnt*a[now], deb, 0LL);
        if(now+1LL>=n) return;
        bak(now+1, m, deb, cnt);
        if(!cnt&&((m-deb)+(m-deb)*k)/a[now]>0LL) bak(now+1LL, ((m-deb)+(m-deb)*k)%a[now], (m-deb)*k, ((m-deb)+(m-deb)*k)/a[now]);
        if(cnt) {
            m+=cnt*a[now];
            m-=deb; deb=0LL;
            m+=(deb=m*k);
            if(m/a[now]>0LL) bak(now+1LL, m%a[now], deb, m/a[now]);
        }
    }
}
int main() {
    long long int m;
    scanf("%lld %lld %lld", &n, &m, &k);
    for(long long int i=0;i<n;i++) {
        scanf("%lld", &a[i]);
    }
    bak(0LL, m, 0LL, 0LL);
    printf("%lld", max);
}