#include <stdio.h>
long long int fun(long long int a, long long int b) {
    return a/b+(a%b&&1);
}
int main() {
    long long int r, c, n;
    scanf("%lld %lld %lld", &r, &c, &n);
    printf("%lld", fun(r, n)*fun(c, n));
}