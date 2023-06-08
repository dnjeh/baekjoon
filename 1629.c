#include <stdio.h>
long long int c, max=0;
long long int bun(long long int a, long long int b) {
    long long int t, tt;
    if(b==1) {
        t=a%c;
    }
    else {
        t=((tt=bun(a, b/2))*tt)%c;
        if(b%2) t=(t*a)%c;
    }
    return t;
}
int main() {
    long long int a, b;
    scanf("%lld %lld %lld", &a, &b, &c);
    printf("%lld", bun(a, b));
}