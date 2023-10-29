#include <stdio.h>
int a[50], q[55], qind;

int main() {
    int n, s, i, tt, t, tmax, tmaxi;
    scanf("%d", &n);
    for(i=0;i<n;i++) {
        scanf("%d", &a[i]);
    } scanf("%d", &s);
    for(t=tmax=0;s;t=tmax=0) {
        for(i=0;i<=s+t;i++) {
            if(a[i]==-1) {
                t++;
                continue;
            }
            if(tmax<a[i]) {
                tmax=a[i];
                tmaxi=i;
                tt=t;
            }
        }
        q[qind++]=tmax;
        a[tmaxi]=-1;
        s-=tmaxi-tt;
    }
    for(i=0;i<qind;i++) {
        printf("%d ", q[i]);
    }
    for(i=0;i<n;i++) {
        if(a[i]!=-1) printf("%d ", a[i]);
    }
}
