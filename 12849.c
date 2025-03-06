#include <stdio.h>
#define MOD 1000000007
int mem[8][100100];
int a[8][8]={
            {0, 1, 1,},
            {1, 0, 1, 1,},
            {1, 1, 0, 1, 1,},
            {0, 1, 1, 0, 1, 1},
            {0, 0, 1, 1, 0, 1, 1},
            {0, 0, 0, 1, 1, 0, 0, 1},
            {0, 0, 0, 0, 1, 0, 0, 1},
            {0, 0, 0, 0, 0, 1, 1, 0}, 
            };
void set(int n);
void mod(int *t, int tt) {
    *t=(tt%MOD);
}
int dp(int t, int tt) {
    int ret=0;
    if(mem[t][tt]!=-1) ret=mem[t][tt];
    else {
        for(int i=0;i<8;i++) {
            if(a[t][i]) mod(&ret, ret+dp(i, tt-1));
        }
        mem[t][tt]=ret;
    }
    return ret;
}
int main() {
    int n;
    scanf("%d", &n);
    set(n);
    printf("%d", dp(0, n));
}
void set(int n) {
    for(int i=0;i<=n;i++) {
        for(int j=0;j<8;j++) {
            if(!i) mem[j][i]=0;
            else mem[j][i]=-1;
        }
    }
    mem[0][0]=1;
}