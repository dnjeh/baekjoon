#include <stdio.h>
int mem[46]={1, 1, };
int dp(int t) {
    int ret=0;
    if(mem[t]) ret=mem[t];
    else {
        mem[t]=ret=dp(t-1)+dp(t-2);
    }
    return ret;
}
int main() {
    int n, t;
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        scanf("%d", &t);
        printf("%d\n", dp(t));
    }
}