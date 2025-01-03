#include <stdio.h>
#define MOD 1000000007
int mod(int *tt, int t) {
    *tt=(*tt+t)%MOD;
}
int mem[2][1002];
int dp(int t, int tt) {
    int ret=0, *_mem=&mem[t][tt];
    if(*_mem!=-1) ret=*_mem;
    else {
        if(t) {
            if(tt-3>0) {
                mod(&ret, dp(t, tt-3));   
                mod(&ret, dp(t, tt-3));   
                mod(&ret, dp(0, tt-3));
                mod(&ret, dp(0, tt-3));
            }
            if(tt-2>0) {
                mod(&ret, dp(t, tt-2));
                mod(&ret, dp(0, tt-2));
            }
        }
        if(tt-3>0) mod(&ret, dp(t, tt-3));
        if(tt-2>0) mod(&ret, dp(t, tt-2));
        if(tt-1>0) mod(&ret, dp(t, tt-1));
        *_mem=ret;
    }
    return ret;
}
void set(int n);
int main() {
    int n;
    scanf("%d", &n);
    set(n);
    printf("%d", dp(1, n+1));
}
void set(int n) {
    for(int i=1;i<=n+1;i++) {
        for(int j=0;j<2;j++) {
            if(i!=1) mem[j][i]=-1;
            else if(!j) mem[j][i]=1;
            else mem[j][i]=0;
        }
    }
}

