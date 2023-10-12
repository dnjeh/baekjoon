#include <stdio.h>
#define INF 2147483647
int a[500001], mem[500001], eme[500001], ans[100001];
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
    for(i=1;i<=500000;i++) {
        if(a[i]) {
            t=lbs(a[i]);
            mem[i]=t;
            if(eme[t]>a[i]) eme[t]=a[i];
            if(max<t) max=t;
        }
    }
    printf("%d\n", n-max);
    for(i=500000, now=max;i>0;i--) {
        if(a[i]) {  
            if(mem[i]==now) {
                now--;
            }   
            else {
                ans[ind++]=i;
            }
        }
    }
    for(i=ind-1;i>=0;i--) {
        printf("%d ", ans[i]);
    }
}
void set() {
    int i;
    eme[i]=-2147483640;
    for(i=1;i<=n;i++) {
        eme[i]=INF;
    }
}