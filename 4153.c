#include <stdio.h>
int main() {
    long long int a, b, c, i;
    for(scanf("%lld %lld %lld", &a, &b, &c);a!=0&&b!=0&&c!=0;scanf("%lld %lld %lld", &a, &b, &c)) {
        if(a>b) {
            if(a>c) {
                i=c;
                c=a;
                a=i;
            }
        }
        else {
            if(b>c) {
                i=c;
                c=b;
                b=i;
            }
        }
        a*=a;
        b*=b;
        c*=c;
        printf(a+b==c?"right\n":"wrong\n");
    }
}