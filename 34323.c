#include <stdio.h>
int main() {
    long long int n, m, s;
    scanf("%lld %lld %lld", &n, &m, &s);
    printf("%lld", (m*s<((m+1)*s*(100-n)/100))?(m*s):((m+1)*s*(100-n)/100));
}