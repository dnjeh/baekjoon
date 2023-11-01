#include <stdio.h>
int n, mem[10][1001]={{0, 1,}, {0, 1,}, {0, 1,}, {0, 1,}, {0, 1,}, {0, 1,}, {0, 1,}, {0, 1,}, {0, 1,}, {0, 1,}};
int dp(int t, int tt) {
    int ret=0;
    if(mem[tt][t]) ret=mem[tt][t]; 
    else {
        ret+=dp(t-1, tt)%10007;
        if(tt) ret+=dp(t, tt-1)%10007;
        ret%=10007;
        mem[tt][t]=ret%10007;
    }
    return ret%10007;
}
int main() {
    int i, sum=0;
    scanf("%d", &n);
    for(i=0;i<10;i++) {
        sum+=dp(n, i)%10007;
        sum%=10007;
    }
    printf("%d", sum%10007);
}
