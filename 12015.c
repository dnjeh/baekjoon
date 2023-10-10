#include <stdio.h>
#define INF 2147483647
int a[1000001], mem[1000001], eme[1000001];
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
    int i, max=0, t;
    scanf("%d", &n);
    set();
    for(i=1;i<=n;i++) {
        scanf("%d", &a[i]);
    }
    for(i=1;i<=n;i++) {
        t=lbs(a[i]);
        mem[i]=t;
        if(eme[t]>a[i]) eme[t]=a[i];
        if(max<t) max=t;
    }
    printf("%d", max);
}
void set() {
    int i;
    for(i=1;i<=n;i++) {
        eme[i]=INF;
    }
}