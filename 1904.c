#include <stdio.h>
int mem[1000100]={1,1,};
int dp(int t) {
    int ret;
    if(!t||mem[t]) ret=mem[t];
    else {
        ret=(dp(t-1)+(t>1?dp(t-2):0))%15746;
        mem[t]=ret;
    }
    return ret;
}
int main() {
    int n;
    scanf("%d", &n);
    printf("%d", dp(n));
}