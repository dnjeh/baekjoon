#include <stdio.h>
int main() {
    long long int T, n;
    scanf("%lld", &T);
    for(long long int i=0;i<T;i++) {
        scanf("%lld", &n);
        printf("%lld\n", n*n);
    }
}