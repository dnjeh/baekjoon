#include <stdio.h>
int a[2000], mem[2000][2000], n, m;
void set();
int dp(int t, int tt) {
    int ret=0;
    if(mem[t][tt]!=-1) ret=mem[t][tt];
    else {
        if(tt-t<=1) {
            if(a[t]==a[tt]) ret=1;
            else ret=0;
        }
        else {
            if(dp(t+1, tt-1)&&a[t]==a[tt]) ret=1;
            else ret=0;
        }
        mem[t][tt]=ret;
    }
    return ret;
}
int main() {
    int i, s, e;
    scanf("%d", &n);
    set();
    for(i=0;i<n;i++) scanf("%d", &a[i]);
    scanf("%d", &m);
    for(i=0;i<m;i++) {
        scanf("%d %d", &s, &e);
        printf("%d\n", dp(s, e));
    }
}
void set() {
    int i, j;
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) mem[i][j]=-1;
        mem[i][i]=1;
    }
}