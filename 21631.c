#include <stdio.h>
int main() {
    long long int a, b;
    scanf("%lld %lld", &a, &b);
    printf("%lld", a<b?a+1:b);
}