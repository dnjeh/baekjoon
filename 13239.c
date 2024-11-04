#include <stdio.h>
#define MOD 1000000007
long long int mem[1001][1001];
int dp(int n, int k) {
    long long int ret=0;
    if(mem[n][k]) ret=mem[n][k];
    else {
        ret=(dp(n-1, k-1)+dp(n-1, k))%MOD;
        mem[n][k]=ret;
    }
    return ret;
}
int main() {
    int t, n, k;
    scanf("%d", &t); 
    for(int i=1;i<=1000;i++) {
        mem[i][0]=mem[i][i]=1;
    }
    for(int i=0;i<t;i++) {
        scanf("%d %d", &n, &k);
        printf("%d\n", dp(n, k));
    }
}