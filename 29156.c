#include <stdio.h>
#include <math.h>
long long int a[100000];
int main() {
    long long int n, l, q, t, tt;
    scanf("%lld", &n);
    for(int i=0;i<n;i++) {
        scanf("%lld", &a[i]);
        if(i) a[i]+=a[i-1];
    }
    scanf("%lld", &l);
    scanf("%lld", &q);
    for(int i=0;i<q;i++) {
        scanf("%lld", &t);
        t--;
        tt=(t?a[t-1]:0)+a[t]-l;
        if(a[n-1]<=l||tt<=0) tt=0;
        else if(tt+l*2>=a[n-1]*2) tt=a[n-1]*2-l*2;
        tt=tt*100/2;
        printf("%lld.%02lld\n", tt/100, tt%100);
    }
}