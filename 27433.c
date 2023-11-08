#include <stdio.h>
int main() {
    long long int n, ans=1;
    scanf("%lld", &n);
    for(;n>=1;n--) ans*=n;
    printf("%lld", ans);
}