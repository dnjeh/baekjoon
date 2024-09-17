#include <stdio.h>
long long int a[5000], mem[5000]; 
long long int max(long long int a, long long int b) {
    return a>b?a:b;
}
long long int abs(long long int t) {
    return t<0?t*-1:t;
}
long long int dp(long long int t) {
    long long int ret=0, _t;
    if(mem[t]) ret=mem[t];
    else {
        for(long long int i=0;i<t;i++) {
            if(ret>(_t=max(dp(i), (t-i)*(1+abs(a[t]-a[i]))))||!ret) ret=_t;
        }
        mem[t]=ret;
    }
    return ret;
}
int main() {
    long long int n;
    scanf("%lld", &n);
    for(long long int i=0;i<n;i++) {
        scanf("%lld", &a[i]);
    }
    printf("%lld", dp(n-1));
    return 0;
}
