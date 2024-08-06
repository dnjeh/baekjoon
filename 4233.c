#include <stdio.h>
int pri(int n) {
    if(n<=1) return 0;
    if(n<=3) return 1;
    if(n%2==0||n%3==0) return 0;
    for(int i=5;i*i<=n;i+=6) {
        if(!(n%i)||!(n%(i+2))) return 0;
    }
    return 1;
}

long long int mulpow(long long int base, long long int exp, long long int mod) {
    long long int result = 1;
    for(;exp;exp/=2) {
        if(exp%2) {
            result=(result*base)%mod;
        }
        base=(base*base)%mod;
    }
    return result;
}
int main() {
    int T;
    long long int a, p;
    for(scanf("%lld %lld", &p, &a);p+a;scanf("%lld %lld", &p, &a)) {
        if(pri(p)||mulpow(a, p, p)!=a) printf("no\n");
        else printf("yes\n");
    }
}