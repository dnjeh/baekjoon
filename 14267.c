#include <stdio.h>
int a[100001], mem[100001], b[100001];
int dp(int t) {
    int ret=0;
    if(mem[t]!=-1) ret=mem[t];
    else {
        ret=b[t]+dp(a[t]);
        mem[t]=ret;
    }
    return ret;
}
int main() {
    int n, m, t, tt;
    scanf("%d %d", &n, &m);
    for(int i=2;i<=n;i++) {
        mem[i]=-1;
    }
    for(int i=1;i<=n;i++) {
        scanf("%d", &a[i]);
    }
    for(int i=0;i<m;i++) {
        scanf("%d %d", &t, &tt);
        b[t]+=tt;
    }
    for(int i=1;i<=n;i++) {
        printf("%d ", dp(i));
    }
}