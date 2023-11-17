#include <stdio.h>
#define DIV 1000000000;
int mem[201][201], n, k;
int dp(int t, int tt) {
    int ret=0, i;
    if(!tt||mem[t][tt]) ret=mem[t][tt];
    else {
        for(i=t;i>=0;i--) {
            ret=(ret+dp(i, tt-1))%DIV;
        }
        ret%=DIV;
        mem[t][tt]=ret;
    }
    return ret;
}
int main() {
    mem[0][0]=1;
    scanf("%d %d", &n, &k);
    printf("%d", dp(n, k));
}