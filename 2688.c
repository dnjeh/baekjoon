#include <stdio.h>
long long int mem[10][64]={{1, }, {1,}, {1,}, {1,}, {1,}, {1,}, {1,}, {1,}, {1,}, {1,}};
long long int dp(int t, int tt) {
    long long int ret=0;
    if(mem[t][tt]) ret=mem[t][tt];
    else {
        for(int i=0;i<=t;i++) {
            ret+=dp(i, tt-1);
        }
        mem[t][tt]=ret;
    }
    return ret;
}
int main() {
    int T, n;
    long long int tsum=0;
    scanf("%d", &T);
    for(int i=0;i<T;i++) {
        scanf("%d", &n);
        n--;
        tsum=0;
        for(int j=0;j<=9;j++) {
            tsum+=dp(j, n);
        }
        printf("%lld\n", tsum);
    }
}