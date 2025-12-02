#include <stdio.h>
int main() {
    long long int T, t;
    scanf("%lld", &T);
    for(int i=0;i<T;i++) {
        scanf("%lld", &t);
        printf("%lld\n", t*2-1);
    }
}