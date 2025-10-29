#include <stdio.h>
int main() {
    long long int a, b, c;
    scanf("%lld %lld %lld", &a, &b, &c);
    printf("%lld", a+b+c-(a>b?(a>c?a:c):(b>c?b:c))-(a<b?(a<c?a:c):(b<c?b:c)));
}