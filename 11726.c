#include <stdio.h>
long long int mem[1001]={0, 1, 2, 3};
long long int dp(long long int _t) {
    long long int rete;
    if(mem[_t]) return mem[_t];
    else {
        rete=dp(_t-1)+dp(_t-2);
    }
    return mem[_t]=rete%10007;
}  
int main() {
    int a;
    scanf("%d", &a);
    printf("%lld", dp(a)%10007);
}