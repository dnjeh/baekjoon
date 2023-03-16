#include <stdio.h>
#include <math.h>
int main() {
    long long int T, i, n, t=0;
    scanf("%lld", &T);
    for(i=0;i<T;i++) {
        scanf("%lld", &n);
        t=(long long int)sqrt(n);
        if(t*t==n) printf("1 ");
        else printf("0 ");
    }
}