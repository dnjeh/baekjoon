#include <stdio.h>
int mem[1000][2]={{1, }, }, a[1000], n;
int dp(int t) {
    int ret=0, i, tt;
    if(mem[t][0]) ret=mem[t][0];
    else {
        for(i=t-1;i>=0;i--) {
            tt=dp(i);
            if(a[i]<a[t]&&(!ret||tt+1>ret)) {
                ret=tt+1;
                mem[t][1]=i;
            }
        }
        if(!ret) ret=1;
        mem[t][0]=ret;
    }
    return ret;
}
void sea(int t) {
    if(mem[t][1]!=t) sea(mem[t][1]);
    printf("%d ", a[t]);
}
void set();
int main() {
    int i, max=0, t;
    scanf("%d", &n);
    set();
    for(i=0;i<n;i++) {
        scanf("%d", &a[i]);
    }
    for(i=n-1;i>=0;i--) {
        t=dp(i);
        if(!max||t>dp(max)) max=i;
    }
    printf("%d\n", dp(max));
    sea(max);
}
void set() {
    for(int i=0;i<n;i++) {
        mem[i][1]=i;
    }
}