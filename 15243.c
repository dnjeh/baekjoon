#include <stdio.h>
#define MOD 1000000007
int mem[1001] = {1, 0, 3, };
int dp(int t) {
    int ret=0;
    if(t<=1||mem[t]) ret=mem[t];
    else {
        if(t-2>=0) ret=(ret+dp(t-2))%MOD;
        for(int i=2;t-i>=0;i+=2) {
            ret=(ret+(dp(t-i)*2)%MOD)%MOD;
        }
        mem[t]=ret;
    }
    return ret;
}   
int main() {
    int n;
    scanf("%d", &n);
    printf("%d", dp(n));
}
