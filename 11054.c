#include <stdio.h>
int hmem[1000]={1, }, lmem[1000], a[1000], n;
int hdp(int t) {
    int ret=0, i, tt;
    if(hmem[t]) ret=hmem[t];
    else {
        for(i=t-1;i>=0;i--) {
            tt=hdp(i);
            if(a[i]<a[t]&&(!ret||tt+1>ret)) {
                ret=tt+1;
            }
        }
        if(!ret) ret=1;
        hmem[t]=ret;
    }
    return ret;
}
int ldp(int t) {
    int ret=0, i, tt;
    if(lmem[t]) ret=lmem[t];
    else {
        for(i=t+1;i<n;i++) {
            tt=ldp(i);
            if(a[i]<a[t]&&(!ret||tt+1>ret)) {
                ret=tt+1;
            }
        }
        if(!ret) ret=1;
        lmem[t]=ret;
    }
    return ret;
}
int main() {
    int i, max=0, t;
    scanf("%d", &n);
    lmem[n-1]=1;
    for(i=0;i<n;i++) {
        scanf("%d", &a[i]);
    }
    for(i=0;i<n;i++) {
        t=hdp(i)+ldp(i);
        if(!max||t-1>max) max=t-1;
    }
    printf("%d", max);
}