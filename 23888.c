#include <stdio.h>
int a, d;
long long int s[1000000];
long long int gcd(long long int a, long long int b) {
    long long int t;
    if(a<b) {
        t=a;
        a=b;
        b=t;
    }
    if(!(a%b)) return b;
    else return gcd(b, a%b);
}
int main() {
    int q, i, l, r, f;
    scanf("%d %d %d", &a, &d, &q);
    s[0]=a;
    for(i=1;i<1000000;i++) {
        s[i]=s[i-1]+a+(long long int)d*i;
    }
    for(i=0;i<q;i++) {
        scanf("%d %d %d", &f, &l, &r);
        l--; r--;
        if(f==1) {
            printf("%lld\n", s[r]-(!l?0:s[l-1]));
        }
        else {
            printf("%lld\n", r==l||!d?a+(long long int)d*l:gcd(a+(long long int)d*l, d));
        }
    }
}