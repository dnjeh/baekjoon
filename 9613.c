#include <stdio.h>
long long int gcd(int a, int b) {
    int t;
    if(a<b) { t=a;a=b;b=t;}
    while(b!=0) {
        t=b;
        b=a%b;
        a=t;
    }
    return a;
}
int main() {
    long long int i, T, n, j, tsum, k;
    scanf("%lld", &T);
    for(i=0;i<T;i++) {
        scanf("%lld", &n);
        int a[n];
        for(j=0, tsum=0;j<n;j++) scanf("%d", &a[j]);
        for(j=0;j<n-1;j++) for(k=j+1;k<n;k++) {
            tsum+=gcd(a[j], a[k]);
        }
        printf("%lld\n", tsum);
    }
}