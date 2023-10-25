#include <stdio.h>
int mem[2][91] = {{0,0}, {0, 1} };
int dp(int tt, int t) {
    int ret=0;
    if(mem[tt][t]!=-1) ret=mem[tt][t];
    else {
        ret=mem[(tt+1)%2][t-1]+1;
        if(!tt) ret+=mem[tt][t]+1;
        mem[tt][t]=ret;
    }
    return ret;
}
void set();
int main() {
    int n;
    scanf("%d", &n);
    set();
    printf("%d", dp(0, n)+dp(1, n));
}
void set() {
    int i;
    for(i=2;i<=90;i++) {
        mem[0][i]=-1;
        mem[1][i]=-1;
    }
}