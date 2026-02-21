#include <stdio.h>
int mem[50] = {1, 1, };
int dp(int n) {
    int ret=0;
    if(mem[n]) ret=mem[n];
    else {
        ret=mem[n]=dp(n-1)+dp(n-2);
    }
    return ret;
}
int main() {
    int n;
    scanf("%d", &n);
    printf("%d", dp(n));
}