#include <stdio.h>
#include <math.h>
int a[1000001], b[1000001], bcnt;
int fun(int t) {
    int _t=0;
    bcnt++;
    for(;t!=1&&b[t]!=bcnt;) {
        b[t]=bcnt;
        _t=0;
        for(;t;t/=10) {
            _t+=(t%10)*(t%10);
        }
        t=_t;
    }
    if(t==1) return 1;
    return 0;
}
int main() {
    int i, j, n;
    for(i=2;i<=1000000;i++) a[i]=i;
    for(i=2;i<=1000;i++) {
        if(a[i]) {
            for(j=2;(j*i)<=1000000;j++) {
                a[j*i]=0;
            }
        }
    }
    scanf("%d", &n);
    for(int i=2;i<=n;i++) {
        if(a[i]==i&&fun(i)) {
            printf("%d\n", i);
        }
    }
}
