#include <stdio.h>

int main() {
    long long int a, b, c, d, t;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
    if(a*c/(b*d)/2*2*b*d==a*c) printf("1");
    else printf("0");
    return 0;
}
