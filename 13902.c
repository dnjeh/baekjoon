#include <stdio.h>
int a[20100], b[1000], mem[10010], m;
int dp(int t) {
    int ret=0, _t;
    if(mem[t]!=-1) ret=mem[t];
    else {
        for(int i=0;i<t;i++) {
            if(((_t=dp(i))||!i)&&a[t-i]&&(!ret||ret>_t+1)) ret=_t+1;
        }
        mem[t]=ret;
    }
    return ret;
}
int main() {
    int n, _t;
    scanf("%d %d", &n, &m);
    for(int i=0;i<m;i++) {
        scanf("%d", &b[i]);
    }
    for(int i=1;i<=n;i++) 
        mem[i]=-1;
    for(int i=0;i<m;i++) {
        a[b[i]]++;
        for(int j=i+1;j<m;j++) {
            a[b[i]+b[j]]++;
        }
    }
    printf("%d", (_t=dp(n))?_t:-1);
}