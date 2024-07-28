#include <stdio.h>
int a[1000][1000], mem[1000][1000], n, m;
int dp(int t, int tt) {
    int ret=0;
    if(!t&&a[t][tt]) ret=1;
    else if(!a[t][tt]) ret=0;
    else if(mem[t][tt]!=-1) ret=mem[t][tt];
    else {
        if(a[t-1][tt]) ret=(ret+dp(t-1, tt))%1000000007;
        if(tt-1>=0&&a[t-1][tt-1]) ret=(ret+dp(t-1, tt-1))%1000000007;
        if(tt+1<m&&a[t-1][tt+1]) ret=(ret+dp(t-1, tt+1))%1000000007;
        mem[t][tt]=ret%1000000007;
    }
    return ret;
}
void set();
int main() {
    int sum=0;
    scanf("%d %d", &n, &m);
    set();
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            scanf("%d", &a[i][j]);
        }
    }
    for(int j=0;j<m;j++) {
        sum=(sum+dp(n-1, j))%1000000007;
    }
    printf("%d", sum);
}
void set() {
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            mem[i][j]=-1;
        }
    }
}