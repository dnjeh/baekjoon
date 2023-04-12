#include <stdio.h>
int mem[301], a[301], is[301];
int dp(int _t) {
    int rete=0;
    if(_t<=0) return 0;
    if(mem[_t]) return mem[_t];
    else {
        if(rete<(dp(_t-1)+a[_t])&&is[_t-1]<=1) {
            rete=(dp(_t-1)+a[_t]);
            is[_t]=is[_t-1]+1;
        }
        if(rete<=(dp(_t-3)+a[_t-1]+a[_t])) {
            rete=(dp(_t-3)+a[_t-1]+a[_t]);
            is[_t]=2;
        }
        if(rete<=(dp(_t-2)+a[_t])) {
            rete=(dp(_t-2)+a[_t]);
            is[_t]=1;
        }
    }
    return mem[_t]=rete;
}
int main() {
    int n, i;
    scanf("%d", &n);
    for(i=1;i<=n;i++) scanf("%d", &a[i]);
    printf("%d", dp(n));
}
