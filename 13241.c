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
    long long int a, b, t;
    scanf("%lld %lld", &a, &b);
    t=gcd(a, b);
    printf("%lld", a/t*b);
}