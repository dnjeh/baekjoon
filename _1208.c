#include <stdio.h>
int a[40], l[4000010], r[4000010];
int n, s;
int min(int a, int b) { return a<b?a:b; }
int main() {
    int i, j, k, tsum, cnt=0;
    scanf("%d %d", &n, &s);
    for(i=0;i<n;i++) {
        scanf("%d", &a[i]);
    }
    for(i=0;i<(1<<(n/2));i++) {
        for(j=i,k=n-1,tsum=0;j;j>>=1, k--) {
            if(j&1) tsum+=a[k];
        }   
        l[tsum+2000000]++;
    }
    for(i=0;i<(1<<(n));i+=(1<<(n/2))) {
        for(j=i,k=n-1,tsum=0;j;j>>=1, k--) {
            if(j&1) tsum+=a[k];
        }   
        r[tsum+2000000]++;
    }
    for(i=2000000;i<=2000000+s;i++) {
        if(l[i]&&r[4000000+s-i]) {
            cnt+=min(l[i], r[4000000+s-i]);
        }
    }
    printf("%d", cnt);
}