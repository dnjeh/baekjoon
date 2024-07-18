#include <stdio.h>
int mem[5000]={1, }, a[5000], n;
int dp(int t) {
    int ret=0, i, tt;
    if(mem[t]) ret=mem[t];
    else {
        for(i=t-1;i>=0;i--) {
            tt=dp(i);
            if(a[i]<a[t]&&(!ret||tt+1>ret)) {
                ret=tt+1;
            }
        }
        if(!ret) ret=1;
        mem[t]=ret;
    }
    return ret;
}
int main() {
    int i, max=0, t;
    scanf("%d", &n);
    for(i=0;i<n;i++) {
        scanf("%d", &a[i]);
    }
    for(i=n-1;i>=0;i--) {
        t=dp(i);
        if(!max||t>max) max=t;
    }
    printf("%d", max);
}