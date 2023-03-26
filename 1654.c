#include <stdio.h>
int main() {
    long long int n, m, i, j, max=0, tsum, t=0, up, dwn, mid, mmax=0;
    scanf("%lld %lld", &n, &m);
    int a[n];
    for(i=0;i<n;i++) {
        scanf("%d", &a[i]);
        if(!i||max<a[i]) max=a[i];
    }
    for(up=max, dwn=1, mid=(dwn+up)/2;dwn<=up;mid=(dwn+up)/2) {
        tsum=0;
        for(i=0;i<n;i++) {
            tsum+=a[i]/mid;
        }        
        if(tsum>=m) {
            if(mmax<mid) mmax=mid;
            dwn=mid+1;
        }
        else up=mid-1;
    }
    printf("%lld", mmax);
}