#include <stdio.h>
long long int gcd(long long int a, long long int b) {
    long long int t;
    if(a<b) { t=a;a=b;b=t;}
    while(b!=0) {
        t=b;
        b=a%b;
        a=t;
    }
    return a;
}
int main() {
    long long int n, a, b, c;
    scanf("%lld %lld %lld", &n, &a, &b);
    c=a*b/gcd(a, b);
    printf("%lld %lld %lld", n/a-n/c, n/b-n/c, n/c);
}