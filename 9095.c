#include <stdio.h>
long long int mem[1001]={0, 1, 2, 4};
long long int dp(long long int _t) {
    long long int rete;
    if(mem[_t]) return mem[_t];
    else {
        rete=dp(_t-1)+dp(_t-2)+dp(_t-3);
    }
    return mem[_t]=rete;
}  
int main() {
    int a, T, i;
    scanf("%d", &T);
    for(i=0;i<T;i++) {
        scanf("%d", &a);
        printf("%lld\n", dp(a));
    }
}
