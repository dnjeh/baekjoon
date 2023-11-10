#include <stdio.h>
#define DIV 1000000000
int mem[10][100][4];
int n;
void set();
int dp(int t, int tt, int ttt) {
    int ret=0;
    if(mem[t][tt][ttt]!=-1) ret=mem[t][tt][ttt];
    else {
        if(t-1>=0) {
            if(t==9&&ttt&&ttt!=1) ret=(ret+dp(t-1, tt-1, ttt&1))%DIV;
            else ret=(ret+dp(t-1, tt-1, ttt))%DIV;
        }
        if(t+1<10) {
            if(!t&&ttt&&ttt!=2) ret=(ret+dp(t+1, tt-1, ttt&2))%DIV;
            else ret=(ret+dp(t+1, tt-1, ttt))%DIV;
        }
        ret%=DIV;
        mem[t][tt][ttt]=ret;
    }
    if(ret) {
        for(int i=0;i<tt;i++) printf("0");
        printf("%d\n", t);
    }
    return ret;
}
int main() {
    int i, sum=0;
    scanf("%d", &n);
    set();
    for(i=0;i<10;i++) {
        sum=(sum+dp(i, n-1, 3))%DIV;
    }
    printf("%d", sum%DIV);
}
void set() {
    int i, j, k;
    for(i=1;i<n;i++) {
        for(j=0;j<10;j++) {
            for(k=0;k<4;k++) {
                mem[j][i][k]=-1;
            }
        }
    }
    for(i=1;i<9;i++) {
        mem[i][0][0]=1;
    }
    mem[9][0][2]=1;
}