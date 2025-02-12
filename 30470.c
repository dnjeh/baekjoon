#include <stdio.h>
int a[2][500100], aind;
int max(int a, int b) {
    return a>b?a:b;
}
int main() {
    long long int ans=0;
    int t, tt, n;
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        scanf("%d %d", &t, &tt);
        if(t==1) {
            ans+=(long long int)(a[0][aind]=tt);
            a[1][aind++]=1;
        }
        else if(aind-1>=0) {
            int _t=max(a[0][aind-1]-tt, 0), tcnt=0;
            for(;aind-1>=0&&a[0][aind-1]>=_t;aind--) {
                ans-=(a[0][aind-1]-_t)*(long long int)a[1][aind-1];
                tcnt+=a[1][aind-1];
                a[0][aind-1]=a[1][aind-1]=0;
            }
            a[0][aind]=_t;
            a[1][aind++]=tcnt;
        }
    }
    printf("%lld", ans);
}