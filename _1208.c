#include <stdio.h>
#define TSIX 2000000
long long int a[40], l[4000010], r[4000010];
long long int n, s;
long long int min(long long int a, long long int b) { return a<b?a:b; }
int main() {
    long long int i, j, k, tsum, cnt=0;
    scanf("%lld %lld", &n, &s);
    for(i=0;i<n;i++) {
        scanf("%lld", &a[i]);
    }
    for(i=1;i<(1<<(n/2));i++) {
        for(j=i,k=n-1,tsum=0;j;j>>=1, k--) {
            if(j&1) tsum+=a[k];
        }   
        l[tsum+TSIX]++;
    }
    for(i=(1<<(n/2));i<(1<<(n));i+=(1<<(n/2))) {
        for(j=i,k=n-1,tsum=0;j;j>>=1, k--) {
            if(j&1) tsum+=a[k];
        }   
        r[tsum+TSIX]++;
    }
    for(i=0;i<=TSIX*2;i++) {
        if(TSIX*2+s-i<=TSIX*2&&l[i]&&r[TSIX*2+s-i]) {
            cnt+=l[i]*r[TSIX*2+s-i];
        }
    }
    printf("%lld", cnt+l[TSIX+s]+r[TSIX+s]);
}