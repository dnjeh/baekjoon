#include <stdio.h>
long long int mem[2][91] = {{0,0}, {0, 1} };
long long int dp(int tt, int t) {
    long long int ret=0;
    if(mem[tt][t]!=-1) ret=mem[tt][t];
    else {
        ret=dp(0, t-1);
        if(!tt) ret+=dp(1, t-1);
        mem[tt][t]=ret;
    }
    return ret;
}
void set();
int main() {
    int n;
    scanf("%d", &n);
    set();
    printf("%lld", dp(0, n)+dp(1, n));
}
void set() {
    int i;
    for(i=2;i<=90;i++) {
        mem[0][i]=-1;
        mem[1][i]=-1;
    }
}
