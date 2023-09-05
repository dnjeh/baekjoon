#include <stdio.h>
int main() {
    long long int a=0, b=1, c=1, t, n, i;
    scanf("%lld", &n);
    for(i=0;i<n;i++) {
        t=b+c;
        a=b;
        b=c;
        c=t;
    }
    printf("%lld", a);
}