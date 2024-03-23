#include <stdio.h>
#include <math.h>
long long int len(long long int t) {
    long long int i;
    for(i=0;t;i++) {
        t/=10;
    }
    return i;
}
int main() {
    long long int a, b, c, d;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
    a=a*(long long int)pow(10, len(b))+b;
    c=c*(long long int)pow(10, len(d))+d;
    printf("%lld", a+c);
}