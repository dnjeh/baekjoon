#include <stdio.h>
long long int a[10], m, k, n, cnt=0, deb;
void sell(int t) {
    m+=cnt*a[t];
    cnt=0;
}
void repay() {
    m-=deb;
    deb=0;
}
void loan() {
    m+=(deb=m*k);
}
void buy(int t) {
    m-=(cnt=m/a[t])*a[t];
}
int main() {
    scanf("%lld %lld %lld", &n, &m, &k);
    for(int i=0;i<n;i++) {
        scanf("%lld", &a[i]);
    }
    for(int i=0;i<n;i++) {
        //printf("%d\n", m);
        sell(i);
        if(i+1<n&&m+m*k-deb>=a[i]&&((a[i]<a[i+1])||(i+2==n&&m<((m+m*k-deb)/a[i]*a[i+1]+(m+m*k-deb)%a[i])))) {
            repay();
            loan();
            buy(i);
        }
    }
    printf("%lld", m);
}
