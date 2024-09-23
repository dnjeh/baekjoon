#include <stdio.h>
int n, m, a[3][10000], b[100], mem[15001]; 
int dp(int t) {
    int ret=0, _t;
    if(mem[t]!=-1) ret=mem[t];
    else {
        for(int i=0;i<m;i++) {
            if(a[1][i]<=t&&(_t=dp(a[0][i])+(a[1][i]-a[0][i])*b[a[2][i]])>ret) ret=_t;
        }
        mem[t]=ret;
    }
    return ret;
}
int main() {
    scanf("%d %d", &n, &m);
    for(int i=0;i<=15000;i++) mem[i]=-1;
    for(int i=0;i<n;i++) {
        scanf("%d", &b[i]);
    }
    for(int i=0;i<m;i++) {
        for(int j=0;j<3;j++) {
            scanf("%d", &a[j][i]);
        }
        a[2][i]--;
    }
    printf("%d", dp(15000));
}
