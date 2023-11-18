#include <stdio.h>
#define INF 2147483647
int a[501], mem[501], eme[501];
int n;
void set();
int lbs(int end) {
    int up, dwn, mid;
    up=n; dwn=0;
    for(mid=(dwn+up)/2;dwn<up;mid=(dwn+up)/2) {
        if(eme[mid]<end) dwn=mid+1;
        else up=mid;
    }
    return up;
}
int main() {
    int i, max=0, t, now, in, ind=0;
    scanf("%d", &n);
    set();
    for(i=1;i<=n;i++) {
        scanf("%d %d", &in, &t);
        a[in]=t;
    }
    for(i=1;i<=500;i++) {
        if(a[i]) {
            t=lbs(a[i]);
            mem[i]=t;
            if(eme[t]>a[i]) eme[t]=a[i];
            if(max<t) max=t;
        }
    }
    printf("%d\n", n-max);
}
void set() {
    int i;
    eme[i]=-2147483640;
    for(i=1;i<=n;i++) {
        eme[i]=INF;
    }
}