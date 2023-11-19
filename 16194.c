#include <stdio.h>
int a[1001], mem[1001], n;
int dp(int t) {
    int i, ret=a[t];
    if(mem[t]) ret=mem[t];
    else {
        for(i=1;i<=(t-i);i++) {
            if(ret>dp(i)+dp(t-i)) ret=dp(i)+dp(t-i);
        } 
        mem[t]=ret;
    }
    return ret;
}
int main() {
    int i;
    scanf("%d", &n);
    for(i=1;i<=n;i++) {
        scanf("%d", &a[i]);
    } mem[1]=a[1];
    printf("%d", dp(n));
}