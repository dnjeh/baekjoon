#include <stdio.h>
int main() {
    long long int a=1, n, b=1, i;
    scanf("%lld", &n);
    for(i=0;i<n;i++) {
        b+=3;
        a+=b;
        a%=45678;
    }
    printf("%lld", a);
}